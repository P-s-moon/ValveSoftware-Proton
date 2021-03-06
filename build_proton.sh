#!/bin/bash

usage()
{
    echo "$1: [--build component] [--release] [--package]"
    echo "Build the Proton Steam Tool"
    echo "Component can be one or more of:"
    echo "  wine, wine32, wine64"
    echo "  vrclient, vrclient32, vrclient64"
    echo "  lsteamclient, lsteamclient32, lsteamclient64"
    echo "or all, which is the default.  The 'all' component also implies --package"
    echo "--release causes symbols to be stripped of debug info."
    echo "--package creates the tar ball in dist/."
}

set -e

JOBS=-j5
PLATFORM=$(uname)

#./wine/ <-- wine source
#./build/ <-- built files
#./dist/ <-- proton build, ready to distribute

build_freetype()
{
    cd "$TOP"/freetype2

    sed -i -e 's/^LIBRARY.*/LIBRARY=libprotonfreetype/' builds/unix/unix-cc.in

    bash ./autogen.sh

    #freetype 32-bit
    cd "$TOP"
    mkdir -p build/freetype.win32
    cd build/freetype.win32
    "$TOP"/freetype2/configure --prefix="$TOOLS_DIR32" --without-png --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32 PKG_CONFIG=false
    make $JOBS
    make install
    cp ./.libs/libprotonfreetype.dylib "$DST_DIR"/lib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib/libprotonfreetype.dylib
    fi

    #freetype 64-bit
    cd "$TOP"
    mkdir -p build/freetype.win64
    cd build/freetype.win64
    "$TOP"/freetype2/configure --prefix="$TOOLS_DIR64" --without-png --host x86_64-apple-darwin PKG_CONFIG=false
    make $JOBS
    make install
    cp ./.libs/libprotonfreetype.dylib "$DST_DIR"/lib64
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib64/libprotonfreetype.dylib
    fi
}

build_libpng()
{
    cd "$TOP"/libpng
    if [ ! -e 'configure' ]; then
        sed -i -e 's/libpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/libprotonpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/' Makefile.am

        bash ./autogen.sh
    fi

    #libpng 32-bit
    cd "$TOP"
    mkdir -p build/libpng.win32
    cd build/libpng.win32
    "$TOP"/libpng/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32
    make $JOBS
    make install
    cp ./.libs/libprotonpng16.dylib "$DST_DIR"/lib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib/libprotonpng16.dylib
    fi

    #libpng 64-bit
    cd "$TOP"
    mkdir -p build/libpng.win64
    cd build/libpng.win64
    "$TOP"/libpng/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
    make $JOBS
    make install
    cp ./.libs/libprotonpng16.dylib "$DST_DIR"/lib64
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib64/libprotonpng16.dylib
    fi
}

build_libjpeg()
{
    cd "$TOP"/libjpeg-turbo
    if [ ! -e 'configure' ]; then
        autoreconf -fiv
    fi

    #if this fails with an nasm error, install a newer nasm with
    #homebrew or the like and put it into your PATH

    #libjpeg 32-bit
    cd "$TOP"
    mkdir -p build/libjpeg.win32
    cd build/libjpeg.win32
    "$TOP"/libjpeg-turbo/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-O3 -g -m32' LDFLAGS=-m32
    make $JOBS
    make install
    mv "$TOOLS_DIR32"/lib/lib{,proton}jpeg.dylib
    cp ./.libs/libjpeg.dylib "$DST_DIR"/lib/libprotonjpeg.dylib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib/libprotonjpeg.dylib
    fi

    #libjpeg 64-bit
    cd "$TOP"
    mkdir -p build/libjpeg.win64
    cd build/libjpeg.win64
    "$TOP"/libjpeg-turbo/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
    make $JOBS
    make install
    mv "$TOOLS_DIR64"/lib/lib{,proton}jpeg.dylib
    cp ./.libs/libjpeg.dylib "$DST_DIR"/lib64/libprotonjpeg.dylib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib64/libprotonjpeg.dylib
    fi
}

build_openal()
{
    #openal 32-bit
    cd "$TOP"
    mkdir -p build/openal.win32
    cd build/openal.win32
    cmake "$TOP"/openal-soft -DCMAKE_C_FLAGS="-m32" -DCMAKE_INSTALL_PREFIX="$TOOLS_DIR32"
    make $JOBS VERBOSE=1
    make install VERBOSE=1
    cp ./libopenal.dylib "$DST_DIR"/lib/libopenal.1.dylib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib/libopenal.1.dylib
    fi

    #openal 64-bit
    cd "$TOP"
    mkdir -p build/openal.win64
    cd build/openal.win64
    cmake "$TOP"/openal-soft -DCMAKE_INSTALL_PREFIX="$TOOLS_DIR64"
    make $JOBS VERBOSE=1
    make install VERBOSE=1
    cp ./libopenal.dylib "$DST_DIR"/lib64/libopenal.1.dylib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib64/libopenal.1.dylib
    fi
}

build_libSDL()
{
    cd "$TOP"/SDL-mirror
    bash ./autogen.sh

    #libsdl2 32-bit
    cd "$TOP"
    mkdir -p build/SDL2.win32
    cd build/SDL2.win32
    "$TOP"/SDL-mirror/configure --prefix="$TOOLS_DIR32" --host i686-apple-darwin CFLAGS='-m32 -g -O2' LDFLAGS=-m32
    make $JOBS
    make install-hdrs
    make install-lib
    cp ./build/.libs/libSDL2.dylib "$DST_DIR"/lib
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib/libSDL2.dylib
    fi

    #libsdl2 64-bit
    cd "$TOP"
    mkdir -p build/SDL2.win64
    cd build/SDL2.win64
    "$TOP"/SDL-mirror/configure --prefix="$TOOLS_DIR64" --host x86_64-apple-darwin
    make $JOBS
    make install-hdrs
    make install-lib
    cp ./build/.libs/libSDL2.dylib "$DST_DIR"/lib64
    if [ x"$RELEASE_BUILD" != x ]; then
        $STRIP "$DST_DIR"/lib64/libSDL2.dylib
    fi
}

build_moltenvk()
{
    #requires Xcode >= 9
    cd "$TOP"/MoltenVK/
    ./fetchDependencies
    xcodebuild -scheme 'MoltenVK (Release)' build

    cp -a Package/Release/MoltenVK/include/* "$TOOLS_DIR64"/include/
    cp -a Package/Release/MoltenVK/macOS/libMoltenVK.dylib "$TOOLS_DIR64"/lib/
    cp -a Package/Release/MoltenVK/macOS/libMoltenVK.dylib "$DST_DIR"/lib64/
}

if [ "$PLATFORM" == "Darwin" ]; then
    STRIP='strip -x'
else
    STRIP='strip'
fi

PACKAGE=false
BUILD_COMPONENTS='all'
INSTALL_PROGRAM_FLAGS=''
for (( i=1; i <= $#; i++)); do
    param="${!i}"
    if [ "$param" == "--release" ]; then
        RELEASE_BUILD=1
        INSTALL_PROGRAM_FLAGS='-s'
    elif [ "$param" == "--package" ]; then
        PACKAGE=true
    elif [ "$param" == "--build" ]; then
        i=$((i+1))
        if [ "$i" -gt "$#" ]; then
            usage `basename $0`
            exit 1
        fi
        BUILD_COMPONENTS="${!i}"
    else
        usage `basename $0`
        exit 1
    fi
done

if [ "$BUILD_COMPONENTS" == "all" ]; then
    PACKAGE=true
fi

TOP="$PWD"
MAKE=make
if [ x"$RELEASE_BUILD" == x ]; then
    set +e; CCACHE=`which ccache`; set -e
fi

if [ "$PLATFORM" == "Darwin" ]; then
    CC="$CCACHE clang"
    AMD64_WRAPPER=""
    I386_WRAPPER=""
else
    CC="$CCACHE gcc"
    AMD64_WRAPPER="schroot --chroot steamrt_scout_beta_amd64 --"
    I386_WRAPPER="schroot --chroot steamrt_scout_beta_i386 --"

    gcc_ver=$($AMD64_WRAPPER gcc -v 2>&1 | grep 'gcc version' | cut -d' ' -f3)
    gcc_maj=$(echo $gcc_ver | cut -d'.' -f1)
    gcc_min=$(echo $gcc_ver | cut -d'.' -f2)
    if [ $gcc_maj -lt 5 -o '(' $gcc_maj -eq 5 -a $gcc_min -lt 3 ')' ]; then
        echo "need gcc >= 5.3"
        exit 1
    fi
fi

DST_DIR="$TOP/build/dist"
TOOLS_DIR64="$TOP/build/tools.win64"
TOOLS_DIR32="$TOP/build/tools.win32"

mkdir -p "$TOP"/dist "$DST_DIR"/bin "$TOP"/build/wine.win32 "$TOP"/build/dist.win32 "$TOP"/build/wine.win64
mkdir -p "$DST_DIR"/lib "$DST_DIR"/lib64 "$TOOLS_DIR64"/lib64 "$TOOLS_DIR32"/lib

if [ "$PLATFORM" == "Darwin" ]; then
    build_freetype

    FREETYPE32_CFLAGS="-I$TOOLS_DIR32/include/freetype2"
    FREETYPE32_LIBS="-L$TOOLS_DIR32/lib -lprotonfreetype -framework CoreServices -framework ApplicationServices -lz"
    ac_cv_lib_soname_freetype32=libprotonfreetype.dylib

    FREETYPE64_CFLAGS="-I$TOOLS_DIR64/include/freetype2"
    FREETYPE64_LIBS="-L$TOOLS_DIR64/lib -lprotonfreetype"
    ac_cv_lib_soname_freetype64=libprotonfreetype.dylib


    build_libpng

    PNG32_CFLAGS="-I$TOOLS_DIR32/include"
    PNG32_LIBS="-L$TOOLS_DIR32/lib -lprotonpng"
    ac_cv_lib_soname_png32=libprotonpng16.dylib

    PNG64_CFLAGS="-I$TOOLS_DIR64/include"
    PNG64_LIBS="-L$TOOLS_DIR64/lib -lprotonpng"
    ac_cv_lib_soname_png64=libprotonpng16.dylib


    build_libjpeg

    JPEG32_CFLAGS="-I$TOOLS_DIR32/include"
    JPEG32_LIBS="-L$TOOLS_DIR32/lib -lprotonjpeg"
    ac_cv_lib_soname_jpeg32=libprotonjpeg.dylib

    JPEG64_CFLAGS="-I$TOOLS_DIR64/include"
    JPEG64_LIBS="-L$TOOLS_DIR64/lib -lprotonjpeg"
    ac_cv_lib_soname_jpeg64=libprotonjpeg.dylib

    build_openal

    build_libSDL

    build_moltenvk
fi

function build_wine64
{
    cd "$TOP"/build/wine.win64
    STRIP="$STRIP" CFLAGS="-I$TOOLS_DIR64/include -g -O2" LDFLAGS="-L$TOOLS_DIR64/lib" PKG_CONFIG_PATH="$TOOLS_DIR64/lib/pkgconfig" CC="$CC" \
        PNG_CFLAGS="$PNG64_CFLAGS" PNG_LIBS="$PNG64_LIBS" ac_cv_lib_soname_png="$ac_cv_lib_soname_png64" \
        JPEG_CFLAGS="$JPEG64_CFLAGS" JPEG_LIBS="$JPEG64_LIBS" ac_cv_lib_soname_jpeg="$ac_cv_lib_soname_jpeg64" \
        FREETYPE_CFLAGS="$FREETYPE64_CFLAGS" FREETYPE_LIBS="$FREETYPE64_LIBS" ac_cv_lib_soname_freetype="$ac_cv_lib_soname_freetype64" \
        $AMD64_WRAPPER "$TOP"/wine/configure \
        --enable-win64 --disable-tests --prefix="$DST_DIR"
    STRIP="$STRIP" $AMD64_WRAPPER make $JOBS
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $AMD64_WRAPPER make install-lib
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $AMD64_WRAPPER make prefix="$TOOLS_DIR64" libdir="$TOOLS_DIR64/lib64" dlldir="$TOOLS_DIR64/lib64/wine" install-dev install-lib
    rm -f "$DST_DIR"/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
    rm -rf "$DST_DIR/share/man/"
}

function build_wine32
{
    cd "$TOP"/build/wine.win32
    STRIP="$STRIP" CFLAGS="-I$TOOLS_DIR32/include -g -O2" LDFLAGS="-L$TOOLS_DIR32/lib" PKG_CONFIG_PATH="$TOOLS_DIR32/lib/pkgconfig" CC="$CC" \
        PNG_CFLAGS="$PNG32_CFLAGS" PNG_LIBS="$PNG32_LIBS" ac_cv_lib_soname_png="$ac_cv_lib_soname_png32" \
        JPEG_CFLAGS="$JPEG32_CFLAGS" JPEG_LIBS="$JPEG32_LIBS" ac_cv_lib_soname_jpeg="$ac_cv_lib_soname_jpeg32" \
        FREETYPE_CFLAGS="$FREETYPE32_CFLAGS" FREETYPE_LIBS="$FREETYPE32_LIBS" ac_cv_lib_soname_freetype="$ac_cv_lib_soname_freetype32" \
        $I386_WRAPPER "$TOP"/wine/configure \
        --disable-tests --prefix="$TOP/build/dist.win32/"
    STRIP="$STRIP" $I386_WRAPPER make $JOBS
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $I386_WRAPPER make install-lib
    INSTALL_PROGRAM_FLAGS="$INSTALL_PROGRAM_FLAGS" STRIP="$STRIP" $I386_WRAPPER make prefix="$TOOLS_DIR32" libdir="$TOOLS_DIR32/lib" dlldir="$TOOLS_DIR32/lib/wine" install-dev install-lib

    #install 32-bit stuff manually, see
    # https://wiki.winehq.org/Packaging#WoW64_Workarounds
    cd "$TOP"/build/dist.win32/
    cp -a lib "$DST_DIR"/
    cp -a bin/wine "$DST_DIR"/bin/
    if [ "$PLATFORM" != "Darwin" ]; then
        cp -a bin/wine-preloader "$DST_DIR"/bin/
    fi
    cp -a bin/wineserver "$DST_DIR"/bin/wineserver32
}

function build_lsteamclient64
{
    cd "$TOP"
    rm -rf build/lsteamclient.win64
    cp -a lsteamclient build/lsteamclient.win64
    cd "$TOP"/build/lsteamclient.win64/
    $AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -DSTEAM_API_EXPORTS \
        -I"$TOOLS_DIR64"/include/ \
        -I"$TOOLS_DIR64"/include/wine/ \
        -I"$TOOLS_DIR64"/include/wine/windows/ \
        -L"$TOOLS_DIR64"/lib64/ \
        -L"$TOOLS_DIR64"/lib64/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make $JOBS
    if [ x"$STRIP" != x ]; then
        $AMD64_WRAPPER $STRIP lsteamclient.dll.so
    fi
    cp -a lsteamclient.dll.so "$DST_DIR"/lib64/wine/
}

function build_lsteamclient32
{
    cd "$TOP"
    rm -rf build/lsteamclient.win32
    cp -a lsteamclient build/lsteamclient.win32
    cd "$TOP"/build/lsteamclient.win32/
    $I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
        -DSTEAM_API_EXPORTS \
        -I"$TOOLS_DIR32"/include/ \
        -I"$TOOLS_DIR32"/include/wine/ \
        -I"$TOOLS_DIR32"/include/wine/windows/ \
        -L"$TOOLS_DIR32"/lib/ \
        -L"$TOOLS_DIR32"/lib/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make $JOBS
    if [ x"$STRIP" != x ]; then
        $I386_WRAPPER $STRIP lsteamclient.dll.so
    fi
    cp -a lsteamclient.dll.so "$DST_DIR"/lib/wine/
}

function build_vrclient64
{
    cd "$TOP"
    rm -rf build/vrclient_x64
    cp -a vrclient_x64 build/vrclient_x64
    cd "$TOP"/build/vrclient_x64/
    $AMD64_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt \
        -I"$TOOLS_DIR64"/include/ \
        -I"$TOOLS_DIR64"/include/wine/ \
        -I"$TOOLS_DIR64"/include/wine/windows/ \
        -L"$TOOLS_DIR64"/lib64/ \
        -L"$TOOLS_DIR64"/lib64/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER make $JOBS
    PATH="$TOOLS_DIR64/bin:$PATH" $AMD64_WRAPPER winebuild --dll --fake-module -E vrclient_x64.spec -o vrclient_x64.dll.fake
    if [ x"$STRIP" != x ]; then
        $AMD64_WRAPPER $STRIP vrclient_x64.dll.so
    fi
    cp -a vrclient_x64.dll.so "$DST_DIR"/lib64/wine/
    cp -a vrclient_x64.dll.fake "$DST_DIR"/lib64/wine/fakedlls/vrclient_x64.dll
}

function build_vrclient32
{
    cd "$TOP"
    rm -rf build/vrclient
    cp -a vrclient_x64 build/vrclient
    cd "$TOP"/build/vrclient/
    mv vrclient_x64.spec vrclient.spec
    $I386_WRAPPER "$TOP"/wine/tools/winemaker/winemaker \
        --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
        -I"$TOOLS_DIR32"/include/ \
        -I"$TOOLS_DIR32"/include/wine/ \
        -I"$TOOLS_DIR32"/include/wine/windows/ \
        -L"$TOOLS_DIR32"/lib/ \
        -L"$TOOLS_DIR32"/lib/wine/ \
        --dll .
    CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER make $JOBS
    PATH="$TOOLS_DIR32/bin:$PATH" $I386_WRAPPER winebuild --dll --fake-module -E vrclient.spec -o vrclient.dll.fake
    if [ x"$STRIP" != x ]; then
        $I386_WRAPPER $STRIP vrclient.dll.so
    fi
    cp -a vrclient.dll.so "$DST_DIR"/lib/wine/
    cp -a vrclient.dll.fake "$DST_DIR"/lib/wine/fakedlls/vrclient.dll
}

#build dxvk

#Debian 9 is too old to build dxvk, so I gave up and I'm building it on my Arch
#Linux box and checking the binaries into Git instead. Blech. --aeikum
cd "$TOP"
mkdir -p "$DST_DIR"/lib64/wine/dxvk
cp "dxvk.win64/dxgi.dll" "$DST_DIR"/lib64/wine/dxvk/
cp "dxvk.win64/d3d11.dll" "$DST_DIR"/lib64/wine/dxvk/
mkdir -p "$DST_DIR"/lib/wine/dxvk
cp "dxvk.win32/dxgi.dll" "$DST_DIR"/lib/wine/dxvk/
cp "dxvk.win32/d3d11.dll" "$DST_DIR"/lib/wine/dxvk/

#unfortunately the Steam runtime chroot is too old to build dxvk, so
#we have to build it in the host system

#requires meson >= 0.43 and posix thread enabled mingw-w64, on debian:
#  update-alternatives --config i686-w64-mingw32-g++
#  update-alternatives --config i686-w64-mingw32-gcc
#  update-alternatives --config x86_64-w64-mingw32-g++
#  update-alternatives --config x86_64-w64-mingw32-gcc
#cd "$TOP"
#if [ ! -e dxvk/proton.win64.built ]; then
#    PATH="$TOP"/glslang/bin/:"$PATH" bash ./build_dxvk.sh win64
#fi
#if [ ! -e dxvk/proton.win32.built ]; then
#    PATH="$TOP"/glslang/bin/:"$PATH" bash ./build_dxvk.sh win32
#fi
#
#mkdir -p "$DST_DIR"/lib/wine/dxvk
#cp -a dxvk/dist.win32/bin/dxgi.dll "$DST_DIR"/lib/wine/dxvk/
#cp -a dxvk/dist.win32/bin/d3d11.dll "$DST_DIR"/lib/wine/dxvk/
#
#mkdir -p "$DST_DIR"/lib64/wine/dxvk
#cp -a dxvk/dist.win64/bin/dxgi.dll "$DST_DIR"/lib64/wine/dxvk/
#cp -a dxvk/dist.win64/bin/d3d11.dll "$DST_DIR"/lib64/wine/dxvk/

case "$BUILD_COMPONENTS" in
    "all")
        build_wine64
        build_wine32
        build_lsteamclient64
        build_lsteamclient32
        build_vrclient64
        build_vrclient32
        ;;
    "wine") build_wine64; build_wine32 ;;
    "wine32") build_wine64 ;;
    "wine64") build_wine64 ;;
    "vrclient") build_vrclient32; build_vrclient64 ;;
    "vrclient32") build_vrclient32 ;;
    "vrclient64") build_vrclient64 ;;
    "lsteamclient") build_lsteamclient32; build_lsteamclient64 ;;
    "lsteamclient32") build_lsteamclient32 ;;
    "lsteamclient64") build_lsteamclient64 ;;
    *) echo "Invalid build components: $BUILD_COMPONENTS" ;;
esac

if [ "$PACKAGE" = true ]; then
    echo "Packaging..."
    cd "$TOP"

    #the difference between -1 and -9 is about 20 MB, so prioritize quick startup over file size
    tar -C build/dist -c . | gzip -c -1 > dist/proton_dist.tar.gz

    cp -a toolmanifest.vdf dist/
    cp -a filelock.py dist/
    cp -a proton dist/
    if [ "$PLATFORM" == "Darwin" ]; then
    cp -a dist.LICENSE.osx dist/LICENSE
    else
    cp -a dist.LICENSE.lin dist/LICENSE
    fi
    date '+%s' > dist/version

    echo "Proton ready in dist/"
fi

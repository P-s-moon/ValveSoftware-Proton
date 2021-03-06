/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRRenderModels_IVRRenderModels_005.h"

typedef struct __winIVRRenderModels_IVRRenderModels_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRRenderModels_IVRRenderModels_005;

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async, 20)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, winRenderModel_t_1012 ** ppRenderModel)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async(_this->linux_side, pchRenderModelName, ppRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeRenderModel, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeRenderModel(winIVRRenderModels_IVRRenderModels_005 *_this, winRenderModel_t_1012 * pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_005_FreeRenderModel(_this->linux_side, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async, 16)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(winIVRRenderModels_IVRRenderModels_005 *_this, TextureID_t textureId, winRenderModel_TextureMap_t_1012 ** ppTexture)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_LoadTexture_Async(_this->linux_side, textureId, ppTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeTexture, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTexture(winIVRRenderModels_IVRRenderModels_005 *_this, winRenderModel_TextureMap_t_1012 * pTexture)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_005_FreeTexture(_this->linux_side, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async, 24)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async(winIVRRenderModels_IVRRenderModels_005 *_this, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async(_this->linux_side, textureId, pD3D11Device, ppD3D11Texture2D);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async, 16)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async(winIVRRenderModels_IVRRenderModels_005 *_this, TextureID_t textureId, void * pDstTexture)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async(_this->linux_side, textureId, pDstTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11(winIVRRenderModels_IVRRenderModels_005 *_this, void * pD3D11Texture2D)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11(_this->linux_side, pD3D11Texture2D);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelName, 20)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelName(winIVRRenderModels_IVRRenderModels_005 *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetRenderModelName(_this->linux_side, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount, 4)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount(winIVRRenderModels_IVRRenderModels_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetRenderModelCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentCount, 12)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentCount(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetComponentCount(_this->linux_side, pchRenderModelName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentName, 28)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentName(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetComponentName(_this->linux_side, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask, 20)
uint64_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask(_this->linux_side, pchRenderModelName, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName, 32)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName(_this->linux_side, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetComponentState, 44)
bool __thiscall winIVRRenderModels_IVRRenderModels_005_GetComponentState(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetComponentState(_this->linux_side, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent, 20)
bool __thiscall winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent(_this->linux_side, pchRenderModelName, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL, 32)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, char * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL(_this->linux_side, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath, 32)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath(winIVRRenderModels_IVRRenderModels_005 *_this, const char * pchRenderModelName, char * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError * peError)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath(_this->linux_side, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum, 8)
const char * __thiscall winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum(winIVRRenderModels_IVRRenderModels_005 *_this, EVRRenderModelError error)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum(_this->linux_side, error);
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_005,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadRenderModel_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadTexture_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_LoadIntoTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_FreeTextureD3D11)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_RenderModelHasComponent)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelThumbnailURL)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelOriginalPath)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_005_GetRenderModelErrorNameFromEnum)
    );
#ifndef __GNUC__
}
#endif

winIVRRenderModels_IVRRenderModels_005 *create_winIVRRenderModels_IVRRenderModels_005(void *linux_side)
{
    winIVRRenderModels_IVRRenderModels_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRRenderModels_IVRRenderModels_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRRenderModels_IVRRenderModels_004.h"

typedef struct __winIVRRenderModels_IVRRenderModels_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRRenderModels_IVRRenderModels_004;

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async, 20)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, winRenderModel_t_0918 ** ppRenderModel)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async(_this->linux_side, pchRenderModelName, ppRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeRenderModel, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeRenderModel(winIVRRenderModels_IVRRenderModels_004 *_this, winRenderModel_t_0918 * pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_004_FreeRenderModel(_this->linux_side, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async, 16)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(winIVRRenderModels_IVRRenderModels_004 *_this, TextureID_t textureId, winRenderModel_TextureMap_t_0918 ** ppTexture)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_LoadTexture_Async(_this->linux_side, textureId, ppTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeTexture, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTexture(winIVRRenderModels_IVRRenderModels_004 *_this, winRenderModel_TextureMap_t_0918 * pTexture)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_004_FreeTexture(_this->linux_side, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async, 24)
EVRRenderModelError __thiscall winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async(winIVRRenderModels_IVRRenderModels_004 *_this, TextureID_t textureId, void * pD3D11Device, void ** ppD3D11Texture2D)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async(_this->linux_side, textureId, pD3D11Device, ppD3D11Texture2D);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11(winIVRRenderModels_IVRRenderModels_004 *_this, void * pD3D11Texture2D)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11(_this->linux_side, pD3D11Texture2D);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetRenderModelName, 20)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetRenderModelName(winIVRRenderModels_IVRRenderModels_004 *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetRenderModelName(_this->linux_side, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount, 4)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount(winIVRRenderModels_IVRRenderModels_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetRenderModelCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentCount, 12)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentCount(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetComponentCount(_this->linux_side, pchRenderModelName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentName, 28)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentName(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetComponentName(_this->linux_side, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask, 20)
uint64_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask(_this->linux_side, pchRenderModelName, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName, 32)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName(_this->linux_side, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_GetComponentState, 44)
bool __thiscall winIVRRenderModels_IVRRenderModels_004_GetComponentState(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_GetComponentState(_this->linux_side, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent, 20)
bool __thiscall winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent(winIVRRenderModels_IVRRenderModels_004 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent(_this->linux_side, pchRenderModelName, pchComponentName);
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_004,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadRenderModel_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadTexture_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_LoadTextureD3D11_Async)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_FreeTextureD3D11)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_004_RenderModelHasComponent)
    );
#ifndef __GNUC__
}
#endif

winIVRRenderModels_IVRRenderModels_004 *create_winIVRRenderModels_IVRRenderModels_004(void *linux_side)
{
    winIVRRenderModels_IVRRenderModels_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRRenderModels_IVRRenderModels_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRRenderModels_IVRRenderModels_002.h"

typedef struct __winIVRRenderModels_IVRRenderModels_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRRenderModels_IVRRenderModels_002;

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_LoadRenderModel, 20)
bool __thiscall winIVRRenderModels_IVRRenderModels_002_LoadRenderModel(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, winRenderModel_t_0915 ** ppRenderModel)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel(_this->linux_side, pchRenderModelName, ppRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_FreeRenderModel, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeRenderModel(winIVRRenderModels_IVRRenderModels_002 *_this, winRenderModel_t_0915 * pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel(_this->linux_side, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_LoadTexture, 16)
bool __thiscall winIVRRenderModels_IVRRenderModels_002_LoadTexture(winIVRRenderModels_IVRRenderModels_002 *_this, TextureID_t textureId, winRenderModel_TextureMap_t_0915 ** ppTexture)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_LoadTexture(_this->linux_side, textureId, ppTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_FreeTexture, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_002_FreeTexture(winIVRRenderModels_IVRRenderModels_002 *_this, winRenderModel_TextureMap_t_0915 * pTexture)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_002_FreeTexture(_this->linux_side, pTexture);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetRenderModelName, 20)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetRenderModelName(winIVRRenderModels_IVRRenderModels_002 *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName(_this->linux_side, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount, 4)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount(winIVRRenderModels_IVRRenderModels_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentCount, 12)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentCount(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetComponentCount(_this->linux_side, pchRenderModelName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentName, 28)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentName(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, uint32_t unComponentIndex, char * pchComponentName, uint32_t unComponentNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetComponentName(_this->linux_side, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask, 20)
uint64_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask(_this->linux_side, pchRenderModelName, pchComponentName);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName, 32)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, const char * pchComponentName, char * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName(_this->linux_side, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_GetComponentState, 36)
bool __thiscall winIVRRenderModels_IVRRenderModels_002_GetComponentState(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, const char * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ComponentState_t * pComponentState)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_GetComponentState(_this->linux_side, pchRenderModelName, pchComponentName, pControllerState, pComponentState);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent, 20)
bool __thiscall winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent(winIVRRenderModels_IVRRenderModels_002 *_this, const char * pchRenderModelName, const char * pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent(_this->linux_side, pchRenderModelName, pchComponentName);
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_002,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_LoadRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_LoadTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_FreeTexture)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetRenderModelCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentCount)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_GetComponentState)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent)
    );
#ifndef __GNUC__
}
#endif

winIVRRenderModels_IVRRenderModels_002 *create_winIVRRenderModels_IVRRenderModels_002(void *linux_side)
{
    winIVRRenderModels_IVRRenderModels_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRRenderModels_IVRRenderModels_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRRenderModels_IVRRenderModels_001.h"

typedef struct __winIVRRenderModels_IVRRenderModels_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRRenderModels_IVRRenderModels_001;

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_LoadRenderModel, 20)
bool __thiscall winIVRRenderModels_IVRRenderModels_001_LoadRenderModel(winIVRRenderModels_IVRRenderModels_001 *_this, const char * pchRenderModelName, winRenderModel_t_0910 * pRenderModel)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_001_LoadRenderModel(_this->linux_side, pchRenderModelName, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_FreeRenderModel, 12)
void __thiscall winIVRRenderModels_IVRRenderModels_001_FreeRenderModel(winIVRRenderModels_IVRRenderModels_001 *_this, winRenderModel_t_0910 * pRenderModel)
{
    TRACE("%p\n", _this);
    cppIVRRenderModels_IVRRenderModels_001_FreeRenderModel(_this->linux_side, pRenderModel);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_GetRenderModelName, 20)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_001_GetRenderModelName(winIVRRenderModels_IVRRenderModels_001 *_this, uint32_t unRenderModelIndex, char * pchRenderModelName, uint32_t unRenderModelNameLen)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_001_GetRenderModelName(_this->linux_side, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}

DEFINE_THISCALL_WRAPPER(winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount, 4)
uint32_t __thiscall winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount(winIVRRenderModels_IVRRenderModels_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVRRenderModels_IVRRenderModels_001_GetRenderModelCount(_this->linux_side);
}

extern vtable_ptr winIVRRenderModels_IVRRenderModels_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRRenderModels_IVRRenderModels_001,
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_LoadRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_FreeRenderModel)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_GetRenderModelName)
        VTABLE_ADD_FUNC(winIVRRenderModels_IVRRenderModels_001_GetRenderModelCount)
    );
#ifndef __GNUC__
}
#endif

winIVRRenderModels_IVRRenderModels_001 *create_winIVRRenderModels_IVRRenderModels_001(void *linux_side)
{
    winIVRRenderModels_IVRRenderModels_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRRenderModels_IVRRenderModels_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRRenderModels_IVRRenderModels_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRRenderModels_IVRRenderModels_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}


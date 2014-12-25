/**
 * (c) 2014 Nucleus project. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"

enum {
    // NV40_CHANNEL_DMA (NV406E)
    // These methods are executed by the PFIFO puller itself, instead of being forwared to an engine.
    NV406E_SET_REFERENCE                     = 0x00000050,
    NV406E_SET_CONTEXT_DMA_SEMAPHORE         = 0x00000060,
    NV406E_SEMAPHORE_OFFSET                  = 0x00000064,
    NV406E_SEMAPHORE_ACQUIRE                 = 0x00000068,
    NV406E_SEMAPHORE_RELEASE                 = 0x0000006C,

    // NV40_CURIE_PRIMITIVE (NV4097)
    NV4097_SET_OBJECT                        = 0x00000000,
    NV4097_NO_OPERATION                      = 0x00000100,
    NV4097_NOTIFY                            = 0x00000104,
    NV4097_WAIT_FOR_IDLE                     = 0x00000110,
    NV4097_PM_TRIGGER                        = 0x00000140,
    NV4097_SET_CONTEXT_DMA_NOTIFIES          = 0x00000180,
    NV4097_SET_CONTEXT_DMA_A                 = 0x00000184,
    NV4097_SET_CONTEXT_DMA_B                 = 0x00000188,
    NV4097_SET_CONTEXT_DMA_COLOR_B           = 0x0000018C,
    NV4097_SET_CONTEXT_DMA_STATE             = 0x00000190,
    NV4097_SET_CONTEXT_DMA_COLOR_A           = 0x00000194,
    NV4097_SET_CONTEXT_DMA_ZETA              = 0x00000198,
    NV4097_SET_CONTEXT_DMA_VERTEX_A          = 0x0000019C,
    NV4097_SET_CONTEXT_DMA_VERTEX_B          = 0x000001A0,
    NV4097_SET_CONTEXT_DMA_SEMAPHORE         = 0x000001A4,
    NV4097_SET_CONTEXT_DMA_REPORT            = 0x000001A8,
    NV4097_SET_CONTEXT_DMA_CLIP_ID           = 0x000001AC,
    NV4097_SET_CONTEXT_DMA_CULL_DATA         = 0x000001B0,
    NV4097_SET_CONTEXT_DMA_COLOR_C           = 0x000001B4,
    NV4097_SET_CONTEXT_DMA_COLOR_D           = 0x000001B8,
    NV4097_SET_SURFACE_CLIP_HORIZONTAL       = 0x00000200,
    NV4097_SET_SURFACE_CLIP_VERTICAL         = 0x00000204,
    NV4097_SET_SURFACE_FORMAT                = 0x00000208,
    NV4097_SET_SURFACE_PITCH_A               = 0x0000020C,
    NV4097_SET_SURFACE_COLOR_AOFFSET         = 0x00000210,
    NV4097_SET_SURFACE_ZETA_OFFSET           = 0x00000214,
    NV4097_SET_SURFACE_COLOR_BOFFSET         = 0x00000218,
    NV4097_SET_SURFACE_PITCH_B               = 0x0000021C,
    NV4097_SET_SURFACE_COLOR_TARGET          = 0x00000220,
    NV4097_SET_SURFACE_PITCH_Z               = 0x0000022C,
    NV4097_INVALIDATE_ZCULL                  = 0x00000234,
    NV4097_SET_CYLINDRICAL_WRAP              = 0x00000238,
    NV4097_SET_CYLINDRICAL_WRAP1             = 0x0000023C,
    NV4097_SET_SURFACE_PITCH_C               = 0x00000280,
    NV4097_SET_SURFACE_PITCH_D               = 0x00000284,
    NV4097_SET_SURFACE_COLOR_COFFSET         = 0x00000288,
    NV4097_SET_SURFACE_COLOR_DOFFSET         = 0x0000028C,
    NV4097_SET_WINDOW_OFFSET                 = 0x000002B8,
    NV4097_SET_WINDOW_CLIP_TYPE              = 0x000002BC,
    NV4097_SET_WINDOW_CLIP_HORIZONTAL        = 0x000002C0,
    NV4097_SET_WINDOW_CLIP_VERTICAL          = 0x000002C4,
    NV4097_SET_DITHER_ENABLE                 = 0x00000300,
    NV4097_SET_ALPHA_TEST_ENABLE             = 0x00000304,
    NV4097_SET_ALPHA_FUNC                    = 0x00000308,
    NV4097_SET_ALPHA_REF                     = 0x0000030C,
    NV4097_SET_BLEND_ENABLE                  = 0x00000310,
    NV4097_SET_BLEND_FUNC_SFACTOR            = 0x00000314,
    NV4097_SET_BLEND_FUNC_DFACTOR            = 0x00000318,
    NV4097_SET_BLEND_COLOR                   = 0x0000031C,
    NV4097_SET_BLEND_EQUATION                = 0x00000320,
    NV4097_SET_COLOR_MASK                    = 0x00000324,
    NV4097_SET_STENCIL_TEST_ENABLE           = 0x00000328,
    NV4097_SET_STENCIL_MASK                  = 0x0000032C,
    NV4097_SET_STENCIL_FUNC                  = 0x00000330,
    NV4097_SET_STENCIL_FUNC_REF              = 0x00000334,
    NV4097_SET_STENCIL_FUNC_MASK             = 0x00000338,
    NV4097_SET_STENCIL_OP_FAIL               = 0x0000033C,
    NV4097_SET_STENCIL_OP_ZFAIL              = 0x00000340,
    NV4097_SET_STENCIL_OP_ZPASS              = 0x00000344,
    NV4097_SET_TWO_SIDED_STENCIL_TEST_ENABLE = 0x00000348,
    NV4097_SET_BACK_STENCIL_MASK             = 0x0000034C,
    NV4097_SET_BACK_STENCIL_FUNC             = 0x00000350,
    NV4097_SET_BACK_STENCIL_FUNC_REF         = 0x00000354,
    NV4097_SET_BACK_STENCIL_FUNC_MASK        = 0x00000358,
    NV4097_SET_BACK_STENCIL_OP_FAIL          = 0x0000035C,
    NV4097_SET_BACK_STENCIL_OP_ZFAIL         = 0x00000360,
    NV4097_SET_BACK_STENCIL_OP_ZPASS         = 0x00000364,
    NV4097_SET_SHADE_MODE                    = 0x00000368,
    NV4097_SET_BLEND_ENABLE_MRT              = 0x0000036C,
    NV4097_SET_COLOR_MASK_MRT                = 0x00000370,
    NV4097_SET_LOGIC_OP_ENABLE               = 0x00000374,
    NV4097_SET_LOGIC_OP                      = 0x00000378,
    NV4097_SET_BLEND_COLOR2                  = 0x0000037C,
    NV4097_SET_DEPTH_BOUNDS_TEST_ENABLE      = 0x00000380,
    NV4097_SET_DEPTH_BOUNDS_MIN              = 0x00000384,
    NV4097_SET_DEPTH_BOUNDS_MAX              = 0x00000388,
    NV4097_SET_CLIP_MIN                      = 0x00000394,
    NV4097_SET_CLIP_MAX                      = 0x00000398,
    NV4097_SET_CONTROL0                      = 0x000003B0,
    NV4097_SET_LINE_WIDTH                    = 0x000003B8,
    NV4097_SET_LINE_SMOOTH_ENABLE            = 0x000003BC,
    NV4097_SET_ANISO_SPREAD                  = 0x000003C0,
    NV4097_SET_SCISSOR_HORIZONTAL            = 0x000008C0,
    NV4097_SET_SCISSOR_VERTICAL              = 0x000008C4,
    NV4097_SET_FOG_MODE                      = 0x000008CC,
    NV4097_SET_FOG_PARAMS                    = 0x000008D0,
    NV4097_SET_SHADER_PROGRAM                = 0x000008E4,
    NV4097_SET_VERTEX_TEXTURE_OFFSET         = 0x00000900,
    NV4097_SET_VERTEX_TEXTURE_FORMAT         = 0x00000904,
    NV4097_SET_VERTEX_TEXTURE_ADDRESS        = 0x00000908,
    NV4097_SET_VERTEX_TEXTURE_CONTROL0       = 0x0000090C,
    NV4097_SET_VERTEX_TEXTURE_CONTROL3       = 0x00000910,
    NV4097_SET_VERTEX_TEXTURE_FILTER         = 0x00000914,
    NV4097_SET_VERTEX_TEXTURE_IMAGE_RECT     = 0x00000918,
    NV4097_SET_VERTEX_TEXTURE_BORDER_COLOR   = 0x0000091C,
    NV4097_SET_VIEWPORT_HORIZONTAL           = 0x00000A00,
    NV4097_SET_VIEWPORT_VERTICAL             = 0x00000A04,
    NV4097_SET_POINT_CENTER_MODE             = 0x00000A0C,
    NV4097_ZCULL_SYNC                        = 0x00000A1C,
    NV4097_SET_VIEWPORT_OFFSET               = 0x00000A20,
    NV4097_SET_VIEWPORT_SCALE                = 0x00000A30,
    NV4097_SET_POLY_OFFSET_POINT_ENABLE      = 0x00000A60,
    NV4097_SET_POLY_OFFSET_LINE_ENABLE       = 0x00000A64,
    NV4097_SET_POLY_OFFSET_FILL_ENABLE       = 0x00000A68,
    NV4097_SET_DEPTH_FUNC                    = 0x00000A6C,
    NV4097_SET_DEPTH_MASK                    = 0x00000A70,
    NV4097_SET_DEPTH_TEST_ENABLE             = 0x00000A74,
    NV4097_SET_POLYGON_OFFSET_SCALE_FACTOR   = 0x00000A78,
    NV4097_SET_POLYGON_OFFSET_BIAS           = 0x00000A7C,
    NV4097_SET_VERTEX_DATA_SCALED4S_M        = 0x00000A80,
    NV4097_SET_TEXTURE_CONTROL2              = 0x00000B00,
    NV4097_SET_TEX_COORD_CONTROL             = 0x00000B40,
    NV4097_SET_TRANSFORM_PROGRAM             = 0x00000B80, // Copy data to PGRAPH's VPE instruction buffer at the LOAD offset.
    NV4097_SET_TRANSFORM_PROGRAM_UNK0        = 0x00000B80, // Save [0:32] instruction bits.
    NV4097_SET_TRANSFORM_PROGRAM_UNK1        = 0x00000B84, // Save [32:64] instruction bits.
    NV4097_SET_TRANSFORM_PROGRAM_UNK2        = 0x00000B88, // Save [64:96] instruction bits.
    NV4097_SET_TRANSFORM_PROGRAM_UNK3        = 0x00000B8C, // Save [96:128] instruction bits, copy the 128-bit value to VPE's buffer at offset LOAD. Then increment LOAD.
    NV4097_SET_SPECULAR_ENABLE               = 0x00001428,
    NV4097_SET_TWO_SIDE_LIGHT_EN             = 0x0000142C,
    NV4097_CLEAR_ZCULL_SURFACE               = 0x00001438,
    NV4097_SET_PERFORMANCE_PARAMS            = 0x00001450,
    NV4097_SET_FLAT_SHADE_OP                 = 0x00001454,
    NV4097_SET_EDGE_FLAG                     = 0x0000145C,
    NV4097_SET_USER_CLIP_PLANE_CONTROL       = 0x00001478,
    NV4097_SET_POLYGON_STIPPLE               = 0x0000147C,
    NV4097_SET_POLYGON_STIPPLE_PATTERN       = 0x00001480,
    NV4097_SET_VERTEX_DATA3F_M               = 0x00001500,
    NV4097_SET_VERTEX_DATA_ARRAY_OFFSET      = 0x00001680,
    NV4097_INVALIDATE_VERTEX_CACHE_FILE      = 0x00001710,
    NV4097_INVALIDATE_VERTEX_FILE            = 0x00001714,
    NV4097_PIPE_NOP                          = 0x00001718,
    NV4097_SET_VERTEX_DATA_BASE_OFFSET       = 0x00001738,
    NV4097_SET_VERTEX_DATA_BASE_INDEX        = 0x0000173C,
    NV4097_SET_VERTEX_DATA_ARRAY_FORMAT      = 0x00001740,
    NV4097_CLEAR_REPORT_VALUE                = 0x000017C8,
    NV4097_SET_ZPASS_PIXEL_COUNT_ENABLE      = 0x000017CC,
    NV4097_GET_REPORT                        = 0x00001800,
    NV4097_SET_ZCULL_STATS_ENABLE            = 0x00001804,
    NV4097_SET_BEGIN_END                     = 0x00001808,
    NV4097_ARRAY_ELEMENT16                   = 0x0000180C,
    NV4097_ARRAY_ELEMENT32                   = 0x00001810,
    NV4097_DRAW_ARRAYS                       = 0x00001814,
    NV4097_INLINE_ARRAY                      = 0x00001818,
    NV4097_SET_INDEX_ARRAY_ADDRESS           = 0x0000181C,
    NV4097_SET_INDEX_ARRAY_DMA               = 0x00001820,
    NV4097_DRAW_INDEX_ARRAY                  = 0x00001824,
    NV4097_SET_FRONT_POLYGON_MODE            = 0x00001828,
    NV4097_SET_BACK_POLYGON_MODE             = 0x0000182C,
    NV4097_SET_CULL_FACE                     = 0x00001830,
    NV4097_SET_FRONT_FACE                    = 0x00001834,
    NV4097_SET_POLY_SMOOTH_ENABLE            = 0x00001838,
    NV4097_SET_CULL_FACE_ENABLE              = 0x0000183C,
    NV4097_SET_TEXTURE_CONTROL3              = 0x00001840,
    NV4097_SET_VERTEX_DATA2F_M               = 0x00001880,
    NV4097_SET_VERTEX_DATA2S_M               = 0x00001900,
    NV4097_SET_VERTEX_DATA4UB_M              = 0x00001940,
    NV4097_SET_VERTEX_DATA4S_M               = 0x00001980,
    NV4097_SET_TEXTURE_OFFSET                = 0x00001A00,
    NV4097_SET_TEXTURE_FORMAT                = 0x00001A04,
    NV4097_SET_TEXTURE_ADDRESS               = 0x00001A08,
    NV4097_SET_TEXTURE_CONTROL0              = 0x00001A0C,
    NV4097_SET_TEXTURE_CONTROL1              = 0x00001A10,
    NV4097_SET_TEXTURE_FILTER                = 0x00001A14,
    NV4097_SET_TEXTURE_IMAGE_RECT            = 0x00001A18,
    NV4097_SET_TEXTURE_BORDER_COLOR          = 0x00001A1C,
    NV4097_SET_VERTEX_DATA4F_M               = 0x00001C00,
    NV4097_SET_COLOR_KEY_COLOR               = 0x00001D00,
    NV4097_SET_SHADER_CONTROL                = 0x00001D60,
    NV4097_SET_INDEXED_CONSTANT_READ_LIMITS  = 0x00001D64,
    NV4097_SET_SEMAPHORE_OFFSET              = 0x00001D6C,
    NV4097_BACK_END_WRITE_SEMAPHORE_RELEASE  = 0x00001D70,
    NV4097_TEXTURE_READ_SEMAPHORE_RELEASE    = 0x00001D74,
    NV4097_SET_ZMIN_MAX_CONTROL              = 0x00001D78,
    NV4097_SET_ANTI_ALIASING_CONTROL         = 0x00001D7C,
    NV4097_SET_SURFACE_COMPRESSION           = 0x00001D80,
    NV4097_SET_ZCULL_EN                      = 0x00001D84,
    NV4097_SET_SHADER_WINDOW                 = 0x00001D88,
    NV4097_SET_ZSTENCIL_CLEAR_VALUE          = 0x00001D8C,
    NV4097_SET_COLOR_CLEAR_VALUE             = 0x00001D90,
    NV4097_CLEAR_SURFACE                     = 0x00001D94,
    NV4097_SET_CLEAR_RECT_HORIZONTAL         = 0x00001D98,
    NV4097_SET_CLEAR_RECT_VERTICAL           = 0x00001D9C,
    NV4097_SET_CLIP_ID_TEST_ENABLE           = 0x00001DA4,
    NV4097_SET_RESTART_INDEX_ENABLE          = 0x00001DAC,
    NV4097_SET_RESTART_INDEX                 = 0x00001DB0,
    NV4097_SET_LINE_STIPPLE                  = 0x00001DB4,
    NV4097_SET_LINE_STIPPLE_PATTERN          = 0x00001DB8,
    NV4097_SET_VERTEX_DATA1F_M               = 0x00001E40,
    NV4097_SET_TRANSFORM_EXECUTION_MODE      = 0x00001E94,
    NV4097_SET_RENDER_ENABLE                 = 0x00001E98,
    NV4097_SET_TRANSFORM_PROGRAM_LOAD        = 0x00001E9C, // Set PGRAPH's VPE LOAD register, which specifies the offset where new instructions are copied.
    NV4097_SET_TRANSFORM_PROGRAM_START       = 0x00001EA0, // Set PGRAPH's VPE START register.
    NV4097_SET_ZCULL_CONTROL0                = 0x00001EA4,
    NV4097_SET_ZCULL_CONTROL1                = 0x00001EA8,
    NV4097_SET_SCULL_CONTROL                 = 0x00001EAC,
    NV4097_SET_POINT_SIZE                    = 0x00001EE0,
    NV4097_SET_POINT_PARAMS_ENABLE           = 0x00001EE4,
    NV4097_SET_POINT_SPRITE_CONTROL          = 0x00001EE8,
    NV4097_SET_TRANSFORM_TIMEOUT             = 0x00001EF8,
    NV4097_SET_TRANSFORM_CONSTANT_LOAD       = 0x00001EFC,
    NV4097_SET_TRANSFORM_CONSTANT            = 0x00001F00,
    NV4097_SET_FREQUENCY_DIVIDER_OPERATION   = 0x00001FC0,
    NV4097_SET_ATTRIB_COLOR                  = 0x00001FC4,
    NV4097_SET_ATTRIB_TEX_COORD              = 0x00001FC8,
    NV4097_SET_ATTRIB_TEX_COORD_EX           = 0x00001FCC,
    NV4097_SET_ATTRIB_UCLIP0                 = 0x00001FD0,
    NV4097_SET_ATTRIB_UCLIP1                 = 0x00001FD4,
    NV4097_INVALIDATE_L2                     = 0x00001FD8,
    NV4097_SET_REDUCE_DST_COLOR              = 0x00001FE0,
    NV4097_SET_NO_PARANOID_TEXTURE_FETCHES   = 0x00001FE8,
    NV4097_SET_SHADER_PACKER                 = 0x00001FEC,
    NV4097_SET_VERTEX_ATTRIB_INPUT_MASK      = 0x00001FF0,
    NV4097_SET_VERTEX_ATTRIB_OUTPUT_MASK     = 0x00001FF4,
    NV4097_SET_TRANSFORM_BRANCH_BITS         = 0x00001FF8,

    // NV03_MEMORY_TO_MEMORY_FORMAT (NV0039)
    NV0039_SET_OBJECT                        = 0x00002000,
    NV0039_SET_CONTEXT_DMA_NOTIFIES          = 0x00002180,
    NV0039_SET_CONTEXT_DMA_BUFFER_IN         = 0x00002184,
    NV0039_SET_CONTEXT_DMA_BUFFER_OUT        = 0x00002188,
    NV0039_OFFSET_IN                         = 0x0000230C,
    NV0039_OFFSET_OUT                        = 0x00002310,
    NV0039_PITCH_IN                          = 0x00002314,
    NV0039_PITCH_OUT                         = 0x00002318,
    NV0039_LINE_LENGTH_IN                    = 0x0000231C,
    NV0039_LINE_COUNT                        = 0x00002320,
    NV0039_FORMAT                            = 0x00002324,
    NV0039_BUFFER_NOTIFY                     = 0x00002328,

    // NV30_CONTEXT_SURFACES_2D (NV3062)
    NV3062_SET_OBJECT                        = 0x00006000,
    NV3062_SET_CONTEXT_DMA_NOTIFIES          = 0x00006180,
    NV3062_SET_CONTEXT_DMA_IMAGE_SOURCE      = 0x00006184,
    NV3062_SET_CONTEXT_DMA_IMAGE_DESTIN      = 0x00006188,
    NV3062_SET_COLOR_FORMAT                  = 0x00006300,
    NV3062_SET_PITCH                         = 0x00006304,
    NV3062_SET_OFFSET_SOURCE                 = 0x00006308,
    NV3062_SET_OFFSET_DESTIN                 = 0x0000630C,

    // NV30_CONTEXT_SURFACE_SWIZZLED (NV309E)
    NV309E_SET_OBJECT                        = 0x00008000,
    NV309E_SET_CONTEXT_DMA_NOTIFIES          = 0x00008180,
    NV309E_SET_CONTEXT_DMA_IMAGE             = 0x00008184,
    NV309E_SET_FORMAT                        = 0x00008300,
    NV309E_SET_OFFSET                        = 0x00008304,

    // NV30_IMAGE_FROM_CPU (NV308A)
    NV308A_SET_OBJECT                        = 0x0000A000,
    NV308A_SET_CONTEXT_DMA_NOTIFIES          = 0x0000A180,
    NV308A_SET_CONTEXT_COLOR_KEY             = 0x0000A184,
    NV308A_SET_CONTEXT_CLIP_RECTANGLE        = 0x0000A188,
    NV308A_SET_CONTEXT_PATTERN               = 0x0000A18C,
    NV308A_SET_CONTEXT_ROP                   = 0x0000A190,
    NV308A_SET_CONTEXT_BETA1                 = 0x0000A194,
    NV308A_SET_CONTEXT_BETA4                 = 0x0000A198,
    NV308A_SET_CONTEXT_SURFACE               = 0x0000A19C,
    NV308A_SET_COLOR_CONVERSION              = 0x0000A2F8,
    NV308A_SET_OPERATION                     = 0x0000A2FC,
    NV308A_SET_COLOR_FORMAT                  = 0x0000A300,
    NV308A_POINT                             = 0x0000A304,
    NV308A_SIZE_OUT                          = 0x0000A308,
    NV308A_SIZE_IN                           = 0x0000A30C,
    NV308A_COLOR                             = 0x0000A400,

    // NV30_SCALED_IMAGE_FROM_MEMORY (NV3089)
    NV3089_SET_OBJECT                        = 0x0000C000,
    NV3089_SET_CONTEXT_DMA_NOTIFIES          = 0x0000C180,
    NV3089_SET_CONTEXT_DMA_IMAGE             = 0x0000C184,
    NV3089_SET_CONTEXT_PATTERN               = 0x0000C188,
    NV3089_SET_CONTEXT_ROP                   = 0x0000C18C,
    NV3089_SET_CONTEXT_BETA1                 = 0x0000C190,
    NV3089_SET_CONTEXT_BETA4                 = 0x0000C194,
    NV3089_SET_CONTEXT_SURFACE               = 0x0000C198,
    NV3089_SET_COLOR_CONVERSION              = 0x0000C2FC,
    NV3089_SET_COLOR_FORMAT                  = 0x0000C300,
    NV3089_SET_OPERATION                     = 0x0000C304,
    NV3089_CLIP_POINT                        = 0x0000C308,
    NV3089_CLIP_SIZE                         = 0x0000C30C,
    NV3089_IMAGE_OUT_POINT                   = 0x0000C310,
    NV3089_IMAGE_OUT_SIZE                    = 0x0000C314,
    NV3089_DS_DX                             = 0x0000C318,
    NV3089_DT_DY                             = 0x0000C31C,
    NV3089_IMAGE_IN_SIZE                     = 0x0000C400,
    NV3089_IMAGE_IN_FORMAT                   = 0x0000C404,
    NV3089_IMAGE_IN_OFFSET                   = 0x0000C408,
    NV3089_IMAGE_IN                          = 0x0000C40C,

    // SCE DRIVER
    SCE_DRIVER_SET_OBJECT                    = 0x0000E000,
    SCE_DRIVER_FLIP                          = 0x0000E924,
    SCE_DRIVER_QUEUE                         = 0x0000E944,
    SCE_DRIVER_INTERRUPT                     = 0x0000EB00,
};

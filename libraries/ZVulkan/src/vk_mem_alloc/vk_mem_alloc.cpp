#ifdef __wasi__
#include <vulkan/vulkan.h>
#else
#include "volk/volk.h"
#endif
#define VMA_IMPLEMENTATION
#define VMA_STATIC_VULKAN_FUNCTIONS 1

#define VMA_NULLABLE
#define VMA_NOT_NULL

#include "vk_mem_alloc/vk_mem_alloc.h"

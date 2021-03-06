#pragma once
#include "vk_engine/renderer/vk_type.h"

namespace vk_engine
{

	// Supports / Extensions related
	namespace vk_support
	{
		std::vector<const char*> getRequiredExtension(bool enableValidationLayers);

		bool checkValidationLayerSupport();

		bool checkDeviceExtensionsSupport(VkPhysicalDevice device);

		VkResult CreateDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pDebugMessenger);

		void DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT pDebugMessenger, VkAllocationCallbacks* pAllocator);

		QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device, VkSurfaceKHR surface);
	}

}
LOCAL_PATH := $(call my-dir)

ifneq ($(filter gts7lwifi, $(TARGET_DEVICE)),)

include $(call all-makefiles-under,$(LOCAL_PATH))

endif

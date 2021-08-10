# Inherit full device configuration
$(call inherit-product, device/samsung/gts7lwifi/full_gts7lwifi.mk)

# Inherit some common Lineage stuff
$(call inherit-product, vendor/lineage/config/common_full_tablet_wifionly.mk)

# Product IDs
PRODUCT_NAME := lineage_gts7lwifi

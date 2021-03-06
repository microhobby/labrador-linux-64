/*
 * ATC2609A Spec Version_V1.05
 */

#ifndef __ATC2609A_REG_DEFINITION_H___
#define __ATC2609A_REG_DEFINITION_H___

/* PMU Register Address */
#define ATC2609A_PMU_BASE			(0x00)
#define ATC2609A_PMU_SYS_CTL0			(ATC2609A_PMU_BASE + 0x00)
#define ATC2609A_PMU_SYS_CTL1			(ATC2609A_PMU_BASE + 0x01)
#define ATC2609A_PMU_SYS_CTL2			(ATC2609A_PMU_BASE + 0x02)
#define ATC2609A_PMU_SYS_CTL3			(ATC2609A_PMU_BASE + 0x03)
#define ATC2609A_PMU_SYS_CTL4			(ATC2609A_PMU_BASE + 0x04)
#define ATC2609A_PMU_SYS_CTL5			(ATC2609A_PMU_BASE + 0x05)
#define ATC2609A_PMU_SYS_CTL6			(ATC2609A_PMU_BASE + 0x06)
#define ATC2609A_PMU_SYS_CTL7			(ATC2609A_PMU_BASE + 0x07)
#define ATC2609A_PMU_SYS_CTL8			(ATC2609A_PMU_BASE + 0x08)
#define ATC2609A_PMU_SYS_CTL9			(ATC2609A_PMU_BASE + 0x09)
#define ATC2609A_PMU_BAT_CTL0			(ATC2609A_PMU_BASE + 0x0A)
#define ATC2609A_PMU_BAT_CTL1			(ATC2609A_PMU_BASE + 0x0B)
#define ATC2609A_PMU_VBUS_CTL0			(ATC2609A_PMU_BASE + 0x0C)
#define ATC2609A_PMU_VBUS_CTL1			(ATC2609A_PMU_BASE + 0x0D)
#define ATC2609A_PMU_WALL_CTL0			(ATC2609A_PMU_BASE + 0x0E)
#define ATC2609A_PMU_WALL_CTL1			(ATC2609A_PMU_BASE + 0x0F)
#define ATC2609A_PMU_SYS_PENDING		(ATC2609A_PMU_BASE + 0x10)
#define ATC2609A_PMU_APDS_CTL0			(ATC2609A_PMU_BASE + 0x11)
#define ATC2609A_PMU_APDS_CTL1			(ATC2609A_PMU_BASE + 0x12)
#define ATC2609A_PMU_APDS_CTL2			(ATC2609A_PMU_BASE + 0x13)
#define ATC2609A_PMU_CHARGER_CTL		(ATC2609A_PMU_BASE + 0x14)
#define ATC2609A_PMU_BAKCHARGER_CTL		(ATC2609A_PMU_BASE + 0x15)
#define ATC2609A_PMU_SWCHG_CTL0			(ATC2609A_PMU_BASE + 0x16)
#define ATC2609A_PMU_SWCHG_CTL1			(ATC2609A_PMU_BASE + 0x17)
#define ATC2609A_PMU_SWCHG_CTL2			(ATC2609A_PMU_BASE + 0x18)
#define ATC2609A_PMU_SWCHG_CTL3			(ATC2609A_PMU_BASE + 0x19)
#define ATC2609A_PMU_SWCHG_CTL4			(ATC2609A_PMU_BASE + 0x1A)
#define ATC2609A_PMU_DC_OSC			(ATC2609A_PMU_BASE + 0x1B)
#define ATC2609A_PMU_DC0_CTL0			(ATC2609A_PMU_BASE + 0x1C)
#define ATC2609A_PMU_DC0_CTL1			(ATC2609A_PMU_BASE + 0x1D)
#define ATC2609A_PMU_DC0_CTL2			(ATC2609A_PMU_BASE + 0x1E)
#define ATC2609A_PMU_DC0_CTL3			(ATC2609A_PMU_BASE + 0x1F)
#define ATC2609A_PMU_DC0_CTL4			(ATC2609A_PMU_BASE + 0x20)
#define ATC2609A_PMU_DC0_CTL5			(ATC2609A_PMU_BASE + 0x21)
#define ATC2609A_PMU_DC0_CTL6			(ATC2609A_PMU_BASE + 0x22)
#define ATC2609A_PMU_DC1_CTL0			(ATC2609A_PMU_BASE + 0x23)
#define ATC2609A_PMU_DC1_CTL1			(ATC2609A_PMU_BASE + 0x24)
#define ATC2609A_PMU_DC1_CTL2			(ATC2609A_PMU_BASE + 0x25)
#define ATC2609A_PMU_DC1_CTL3			(ATC2609A_PMU_BASE + 0x26)
#define ATC2609A_PMU_DC1_CTL4			(ATC2609A_PMU_BASE + 0x27)
#define ATC2609A_PMU_DC1_CTL5			(ATC2609A_PMU_BASE + 0x28)
#define ATC2609A_PMU_DC1_CTL6			(ATC2609A_PMU_BASE + 0x29)
#define ATC2609A_PMU_DC2_CTL0			(ATC2609A_PMU_BASE + 0x2A)
#define ATC2609A_PMU_DC2_CTL1			(ATC2609A_PMU_BASE + 0x2B)
#define ATC2609A_PMU_DC2_CTL2			(ATC2609A_PMU_BASE + 0x2C)
#define ATC2609A_PMU_DC2_CTL3			(ATC2609A_PMU_BASE + 0x2D)
#define ATC2609A_PMU_DC2_CTL4			(ATC2609A_PMU_BASE + 0x2E)
#define ATC2609A_PMU_DC2_CTL5			(ATC2609A_PMU_BASE + 0x2F)
#define ATC2609A_PMU_DC2_CTL6			(ATC2609A_PMU_BASE + 0x30)
#define ATC2609A_PMU_DC3_CTL0			(ATC2609A_PMU_BASE + 0x31)
#define ATC2609A_PMU_DC3_CTL1			(ATC2609A_PMU_BASE + 0x32)
#define ATC2609A_PMU_DC3_CTL2			(ATC2609A_PMU_BASE + 0x33)
#define ATC2609A_PMU_DC3_CTL3			(ATC2609A_PMU_BASE + 0x34)
#define ATC2609A_PMU_DC3_CTL4			(ATC2609A_PMU_BASE + 0x35)
#define ATC2609A_PMU_DC3_CTL5			(ATC2609A_PMU_BASE + 0x36)
#define ATC2609A_PMU_DC3_CTL6			(ATC2609A_PMU_BASE + 0x37)
#define ATC2609A_PMU_DC_ZR			(ATC2609A_PMU_BASE + 0x38)
#define ATC2609A_PMU_LDO0_CTL0			(ATC2609A_PMU_BASE + 0x39)
#define ATC2609A_PMU_LDO0_CTL1			(ATC2609A_PMU_BASE + 0x3A)
#define ATC2609A_PMU_LDO1_CTL0			(ATC2609A_PMU_BASE + 0x3B)
#define ATC2609A_PMU_LDO1_CTL1			(ATC2609A_PMU_BASE + 0x3C)
#define ATC2609A_PMU_LDO2_CTL0			(ATC2609A_PMU_BASE + 0x3D)
#define ATC2609A_PMU_LDO2_CTL1			(ATC2609A_PMU_BASE + 0x3E)
#define ATC2609A_PMU_LDO3_CTL0			(ATC2609A_PMU_BASE + 0x3F)
#define ATC2609A_PMU_LDO3_CTL1			(ATC2609A_PMU_BASE + 0x40)
#define ATC2609A_PMU_LDO4_CTL0			(ATC2609A_PMU_BASE + 0x41)
#define ATC2609A_PMU_LDO4_CTL1			(ATC2609A_PMU_BASE + 0x42)
#define ATC2609A_PMU_LDO5_CTL0			(ATC2609A_PMU_BASE + 0x43)
#define ATC2609A_PMU_LDO5_CTL1			(ATC2609A_PMU_BASE + 0x44)
#define ATC2609A_PMU_LDO6_CTL0			(ATC2609A_PMU_BASE + 0x45)
#define ATC2609A_PMU_LDO6_CTL1			(ATC2609A_PMU_BASE + 0x46)
#define ATC2609A_PMU_LDO7_CTL0			(ATC2609A_PMU_BASE + 0x47)
#define ATC2609A_PMU_LDO7_CTL1			(ATC2609A_PMU_BASE + 0x48)
#define ATC2609A_PMU_LDO8_CTL0			(ATC2609A_PMU_BASE + 0x49)
#define ATC2609A_PMU_LDO8_CTL1			(ATC2609A_PMU_BASE + 0x4A)
#define ATC2609A_PMU_LDO9_CTL			(ATC2609A_PMU_BASE + 0x4B)
#define ATC2609A_PMU_OV_INT_EN			(ATC2609A_PMU_BASE + 0x4C)
#define ATC2609A_PMU_OV_STATUS			(ATC2609A_PMU_BASE + 0x4D)
#define ATC2609A_PMU_UV_INT_EN			(ATC2609A_PMU_BASE + 0x4E)
#define ATC2609A_PMU_UV_STATUS			(ATC2609A_PMU_BASE + 0x4F)
#define ATC2609A_PMU_OC_INT_EN			(ATC2609A_PMU_BASE + 0x50)
#define ATC2609A_PMU_OC_STATUS			(ATC2609A_PMU_BASE + 0x51)
#define ATC2609A_PMU_OT_CTL			(ATC2609A_PMU_BASE + 0x52)
#define ATC2609A_PMU_CM_CTL0			(ATC2609A_PMU_BASE + 0x53)
#define ATC2609A_PMU_FW_USE0			(ATC2609A_PMU_BASE + 0x54)
#define ATC2609A_PMU_FW_USE1			(ATC2609A_PMU_BASE + 0x55)
#define ATC2609A_PMU_ADC12B_I			(ATC2609A_PMU_BASE + 0x56)
#define ATC2609A_PMU_ADC12B_V			(ATC2609A_PMU_BASE + 0x57)
#define ATC2609A_PMU_ADC12B_DUMMY		(ATC2609A_PMU_BASE + 0x58)
#define ATC2609A_PMU_AUXADC_CTL0		(ATC2609A_PMU_BASE + 0x59)
#define ATC2609A_PMU_AUXADC_CTL1		(ATC2609A_PMU_BASE + 0x5A)
#define ATC2609A_PMU_BATVADC			(ATC2609A_PMU_BASE + 0x5B)
#define ATC2609A_PMU_BATIADC			(ATC2609A_PMU_BASE + 0x5C)
#define ATC2609A_PMU_WALLVADC			(ATC2609A_PMU_BASE + 0x5D)
#define ATC2609A_PMU_WALLIADC			(ATC2609A_PMU_BASE + 0x5E)
#define ATC2609A_PMU_VBUSVADC			(ATC2609A_PMU_BASE + 0x5F)
#define ATC2609A_PMU_VBUSIADC			(ATC2609A_PMU_BASE + 0x60)
#define ATC2609A_PMU_SYSPWRADC			(ATC2609A_PMU_BASE + 0x61)
#define ATC2609A_PMU_REMCONADC			(ATC2609A_PMU_BASE + 0x62)
#define ATC2609A_PMU_SVCCADC			(ATC2609A_PMU_BASE + 0x63)
#define ATC2609A_PMU_CHGIADC			(ATC2609A_PMU_BASE + 0x64)
#define ATC2609A_PMU_IREFADC			(ATC2609A_PMU_BASE + 0x65)
#define ATC2609A_PMU_BAKBATADC			(ATC2609A_PMU_BASE + 0x66)
#define ATC2609A_PMU_ICTEMPADC			(ATC2609A_PMU_BASE + 0x67)
#define ATC2609A_PMU_AUXADC0			(ATC2609A_PMU_BASE + 0x68)
#define ATC2609A_PMU_AUXADC1			(ATC2609A_PMU_BASE + 0x69)
#define ATC2609A_PMU_AUXADC2			(ATC2609A_PMU_BASE + 0x6A)
#define ATC2609A_PMU_AUXADC3			(ATC2609A_PMU_BASE + 0x6B)
#define ATC2609A_PMU_ICTEMPADC_ADJ		(ATC2609A_PMU_BASE + 0x6C)
#define ATC2609A_PMU_BDG_CTL			(ATC2609A_PMU_BASE + 0x6D)
#define ATC2609A_RTC_CTL			(ATC2609A_PMU_BASE + 0x6E)
#define ATC2609A_RTC_MSALM			(ATC2609A_PMU_BASE + 0x6F)
#define ATC2609A_RTC_HALM			(ATC2609A_PMU_BASE + 0x70)
#define ATC2609A_RTC_YMDALM			(ATC2609A_PMU_BASE + 0x71)
#define ATC2609A_RTC_MS				(ATC2609A_PMU_BASE + 0x72)
#define ATC2609A_RTC_H				(ATC2609A_PMU_BASE + 0x73)
#define ATC2609A_RTC_DC				(ATC2609A_PMU_BASE + 0x74)
#define ATC2609A_RTC_YMD			(ATC2609A_PMU_BASE + 0x75)
#define ATC2609A_EFUSE_DAT			(ATC2609A_PMU_BASE + 0x76)
#define ATC2609A_EFUSECRTL1			(ATC2609A_PMU_BASE + 0x77)
#define ATC2609A_EFUSECRTL2			(ATC2609A_PMU_BASE + 0x78)
#define ATC2609A_PMU_DC4_CTL0			(ATC2609A_PMU_BASE + 0x79)
#define ATC2609A_PMU_DC4_CTL1			(ATC2609A_PMU_BASE + 0x7A)
#define ATC2609A_PMU_DC4_CTL2			(ATC2609A_PMU_BASE + 0x7B)
#define ATC2609A_PMU_DC4_CTL3			(ATC2609A_PMU_BASE + 0x7C)
#define ATC2609A_PMU_DC4_CTL4			(ATC2609A_PMU_BASE + 0x7D)
#define ATC2609A_PMU_DC4_CTL5			(ATC2609A_PMU_BASE + 0x7E)
#define ATC2609A_PMU_DC4_CTL6			(ATC2609A_PMU_BASE + 0x7F)
#define ATC2609A_PMU_PWR_STATUS			(ATC2609A_PMU_BASE + 0x80)
#define ATC2609A_PMU_S2_PWR			(ATC2609A_PMU_BASE + 0x81)
#define ATC2609A_CLMT_CTL0			(ATC2609A_PMU_BASE + 0x82)
#define ATC2609A_CLMT_DATA0			(ATC2609A_PMU_BASE + 0x83)
#define ATC2609A_CLMT_DATA1			(ATC2609A_PMU_BASE + 0x84)
#define ATC2609A_CLMT_DATA2			(ATC2609A_PMU_BASE + 0x85)
#define ATC2609A_CLMT_DATA3			(ATC2609A_PMU_BASE + 0x86)
#define ATC2609A_CLMT_ADD0			(ATC2609A_PMU_BASE + 0x87)
#define ATC2609A_CLMT_ADD1			(ATC2609A_PMU_BASE + 0x88)
#define ATC2609A_CLMT_OCV_TABLE			(ATC2609A_PMU_BASE + 0x89)
#define ATC2609A_CLMT_R_TABLE			(ATC2609A_PMU_BASE + 0x8A)
#define ATC2609A_PMU_PWRON_CTL0			(ATC2609A_PMU_BASE + 0x8D)
#define ATC2609A_PMU_PWRON_CTL1			(ATC2609A_PMU_BASE + 0x8E)
#define ATC2609A_PMU_PWRON_CTL2			(ATC2609A_PMU_BASE + 0x8F)
#define ATC2609A_IRC_CTL			(ATC2609A_PMU_BASE + 0x90)
#define ATC2609A_IRC_STAT			(ATC2609A_PMU_BASE + 0x91)
#define ATC2609A_IRC_CC				(ATC2609A_PMU_BASE + 0x92)
#define ATC2609A_IRC_KDC			(ATC2609A_PMU_BASE + 0x93)
#define ATC2609A_IRC_WK				(ATC2609A_PMU_BASE + 0x94)
#define ATC2609A_IRC_RCC			(ATC2609A_PMU_BASE + 0x95)

/* AUDIO_OUT Register Address */
#define ATC2609A_AUDIO_OUT_BASE			(0xA0)
#define ATC2609A_AUDIOINOUT_CTL			(ATC2609A_AUDIO_OUT_BASE + 0x00)
#define ATC2609A_AUDIO_DEBUGOUTCTL		(ATC2609A_AUDIO_OUT_BASE + 0x01)
#define ATC2609A_DAC_DIGITALCTL			(ATC2609A_AUDIO_OUT_BASE + 0x02)
#define ATC2609A_DAC_VOLUMECTL0			(ATC2609A_AUDIO_OUT_BASE + 0x03)
#define ATC2609A_DAC_ANALOG0			(ATC2609A_AUDIO_OUT_BASE + 0x04)
#define ATC2609A_DAC_ANALOG1			(ATC2609A_AUDIO_OUT_BASE + 0x05)
#define ATC2609A_DAC_ANALOG2			(ATC2609A_AUDIO_OUT_BASE + 0x06)
#define ATC2609A_DAC_ANALOG3			(ATC2609A_AUDIO_OUT_BASE + 0x07)

/* AUDIO_IN Register Address */
#define ATC2609A_AUDIO_IN_BASE			(0xA0)
#define ATC2609A_ADC_DIGITALCTL			(ATC2609A_AUDIO_IN_BASE + 0x08)
#define ATC2609A_ADC_HPFCTL			(ATC2609A_AUDIO_IN_BASE + 0x09)
#define ATC2609A_ADC_CTL			(ATC2609A_AUDIO_IN_BASE + 0x0A)
#define ATC2609A_AGC_CTL0			(ATC2609A_AUDIO_IN_BASE + 0x0B)
#define ATC2609A_AGC_CTL1			(ATC2609A_AUDIO_IN_BASE + 0x0C)
#define ATC2609A_AGC_CTL2			(ATC2609A_AUDIO_IN_BASE + 0x0D)
#define ATC2609A_ADC_ANALOG0			(ATC2609A_AUDIO_IN_BASE + 0x0E)
#define ATC2609A_ADC_ANALOG1			(ATC2609A_AUDIO_IN_BASE + 0x0F)

/* PCM_IF Register Address */
#define ATC2609A_PCM_IF_BASE			(0xA0)
#define ATC2609A_PCM0_CTL			(ATC2609A_PCM_IF_BASE + 0x10)
#define ATC2609A_PCM1_CTL			(ATC2609A_PCM_IF_BASE + 0x11)
#define ATC2609A_PCM2_CTL			(ATC2609A_PCM_IF_BASE + 0x12)
#define ATC2609A_PCMIF_CTL			(ATC2609A_PCM_IF_BASE + 0x13)

/* CMU_CONTROL Register Address */
#define ATC2609A_CMU_CONTROL_BASE		(0xC0)
#define ATC2609A_CMU_DEVRST			(ATC2609A_CMU_CONTROL_BASE + 0x01)

/* INTS Register Address */
#define ATC2609A_INTS_BASE			(0xC8)
#define ATC2609A_INTS_PD			(ATC2609A_INTS_BASE + 0x00)
#define ATC2609A_INTS_MSK			(ATC2609A_INTS_BASE + 0x01)

/* MFP Register Address */
#define ATC2609A_MFP_BASE			(0xD0)
#define ATC2609A_MFP_CTL			(ATC2609A_MFP_BASE + 0x00)
#define ATC2609A_PAD_VSEL			(ATC2609A_MFP_BASE + 0x01)
#define ATC2609A_GPIO_OUTEN			(ATC2609A_MFP_BASE + 0x02)
#define ATC2609A_GPIO_INEN			(ATC2609A_MFP_BASE + 0x03)
#define ATC2609A_GPIO_DAT			(ATC2609A_MFP_BASE + 0x04)
#define ATC2609A_PAD_DRV			(ATC2609A_MFP_BASE + 0x05)
#define ATC2609A_PAD_EN				(ATC2609A_MFP_BASE + 0x06)
#define ATC2609A_DEBUG_SEL			(ATC2609A_MFP_BASE + 0x07)
#define ATC2609A_DEBUG_IE			(ATC2609A_MFP_BASE + 0x08)
#define ATC2609A_DEBUG_OE			(ATC2609A_MFP_BASE + 0x09)
#define ATC2609A_CHIP_VER			(ATC2609A_MFP_BASE + 0x0C)

/* PWSI Register Address */
#define ATC2609A_PWSI_BASE			(0xF0)
#define ATC2609A_PWSI_CTL			(ATC2609A_PWSI_BASE + 0x00)
#define ATC2609A_PWSI_STATUS			(ATC2609A_PWSI_BASE + 0x01)

/* TWSI Register Address */
#define ATC2609A_TWSI_BASE			(0xF8)
#define ATC2609A_SADDR				(ATC2609A_TWSI_BASE + 0x07)

#endif

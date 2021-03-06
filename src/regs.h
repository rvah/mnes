#ifndef REGS_H
#define REGS_H

#define REG_PPU_CTRL_1 0x2000
#define REG_PPU_CTRL_2 0x2001
#define REG_PPU_STAT 0x2002
#define REG_SPR_RAM_ADDR 0x2003
#define REG_SPR_RAM_DATA 0x2004
#define REG_PPU_BG_SCR 0x2005
#define REG_VRAM_ADDR 0x2006
#define REG_VRAM_RW_DATA 0x2007
#define REG_APU_CHAN_1_VOL 0x4000
#define REG_APU_CHAN_1_SWEEP 0x4001
#define REG_APU_CHAN_1_FREQ 0x4002
#define REG_APU_CHAN_1_LEN 0x4003
#define REG_APU_CHAN_2_VOL 0x4004
#define REG_APU_CHAN_2_SWEEP 0x4005
#define REG_APU_CHAN_2_FREQ 0x4006
#define REG_APU_CHAN_2_LEN 0x4007
#define REG_APU_CHAN_3_LINEAR_CNT 0x4008
#define REG_APU_CHAN_3_UNDEF 0x4009
#define REG_APU_CHAN_3_FREQ 0x400a
#define REG_APU_CHAN_3_LEN 0x400b
#define REG_APU_CHAN_4_VOL 0x400c
#define REG_APU_CHAN_4_UNDEF 0x400d
#define REG_APU_CHAN_4_FREQ 0x400e
#define REG_APU_CHAN_4_LEN 0x400f
#define REG_APU_CHAN_5_PLAY_MODE_AND_DMA_FREQ 0x4010
#define REG_APU_CHAN_5_DELTA_CNT_LOAD 0x4011
#define REG_APU_CHAN_5_ADDR_LOAD 0x4012
#define REG_APU_CHAN_5_LEN 0x4013
#define REG_SPR_RAM_DMA 0x4014
#define REG_DMC_IRQ_LEN_CNT_STAT 0x4015
#define REG_JOYP_1 0x4016
#define REG_JOYP_2 0x4017


#define PPU_CTRL_1_VRAM_INC 0x4
#define PPU_CTRL_1_PATTERN_TABLE_OAM 0x8
#define PPU_CTRL_1_PATTERN_TABLE_BG 0x10
#define PPU_CTRL_1_SPRITE_SIZE 0x20
#endif // REGS_H
#pragma once

inline constexpr uint8_t SIMPLIFIED_TEX_SHADER[1096] = {
    0x44, 0x58, 0x42, 0x43, 0x91, 0xE8, 0x6E, 0x30, 0xB3, 0x5E, 0x88, 0xC3, 0x61, 0x81, 0xC2, 0x48,
    0x32, 0x5D, 0x0F, 0x2D, 0x01, 0x00, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x2C, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0xBC, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4E,
    0x54, 0x01, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0F, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x0E, 0x00, 0x00, 0x00, 0x1A, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x06, 0x06, 0x00, 0x00, 0x25, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x04, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x0F, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x2F, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5F, 0x50,
    0x4F, 0x53, 0x49, 0x54, 0x49, 0x4F, 0x4E, 0x00, 0x43, 0x4C, 0x49, 0x50, 0x44, 0x49, 0x53, 0x54,
    0x41, 0x4E, 0x43, 0x45, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4F, 0x4F, 0x52, 0x44, 0x00, 0x44, 0x45,
    0x50, 0x54, 0x48, 0x56, 0x41, 0x4C, 0x55, 0x45, 0x00, 0x46, 0x4F, 0x47, 0x46, 0x41, 0x43, 0x54,
    0x4F, 0x52, 0x00, 0x57, 0x4F, 0x52, 0x4C, 0x44, 0x56, 0x49, 0x45, 0x57, 0x4E, 0x4F, 0x52, 0x4D,
    0x41, 0x4C, 0x00, 0x57, 0x4F, 0x52, 0x4C, 0x44, 0x56, 0x49, 0x45, 0x57, 0x50, 0x4F, 0x53, 0x49,
    0x54, 0x49, 0x4F, 0x4E, 0x00, 0xAB, 0xAB, 0xAB, 0x4F, 0x53, 0x47, 0x4E, 0x2C, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
    0x53, 0x56, 0x5F, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xAB, 0xAB, 0x53, 0x48, 0x45, 0x58,
    0x84, 0x02, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 0x6A, 0x08, 0x00, 0x01,
    0x59, 0x00, 0x00, 0x04, 0x46, 0x8E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00,
    0x5A, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x03,
    0x00, 0x60, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x62, 0x10, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x42, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x65, 0x00, 0x00, 0x03, 0xF2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02,
    0x03, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00,
    0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x15, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00,
    0xC6, 0x79, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x09, 0xC2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x46, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x52, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xA6, 0x0B, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x56, 0x16, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8B, 0xC2, 0x00, 0x00, 0x80,
    0x43, 0x55, 0x15, 0x00, 0xF2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x86, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3A, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x31, 0x00, 0x00, 0x08, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0D, 0x00, 0x04, 0x03, 0x1A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x09,
    0xE2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1A, 0x00, 0x00, 0x00, 0x06, 0x89, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x08, 0xE2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x0E, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x89, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 0xE2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x56, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x33, 0x33, 0x40, 0x33, 0x33, 0x33, 0x40, 0x33, 0x33, 0x33, 0x40, 0x06, 0x09, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0A, 0xE2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x56, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x06, 0x09, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09,
    0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA6, 0x1A, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01,
};
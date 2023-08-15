/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t down_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x77, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x77, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x78, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x98, 0x88, 0x88, 0x88,
  0x88, 0x87, 0x8F, 0xB4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0xFA, 0x48, 0x88, 0x88,
  0x88, 0x78, 0xFF, 0xFA, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x8F, 0xFF, 0x84, 0x88, 0x88,
  0x88, 0x7F, 0xFF, 0xFF, 0xA3, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0xFF, 0xFF, 0xFA, 0x47, 0x88,
  0x88, 0x7A, 0xFF, 0xFF, 0xFA, 0x38, 0x88, 0x88, 0x88, 0x77, 0x8F, 0xFF, 0xFF, 0xC5, 0x35, 0x88,
  0x88, 0x77, 0x9F, 0xFF, 0xFF, 0xA3, 0x88, 0x88, 0x87, 0x79, 0xFF, 0xFF, 0xFC, 0x43, 0x46, 0x88,
  0x88, 0x87, 0x79, 0xFF, 0xFF, 0xFA, 0x47, 0x88, 0x77, 0x9F, 0xFF, 0xFF, 0xC4, 0x34, 0x78, 0x88,
  0x88, 0x88, 0x77, 0x9F, 0xFF, 0xFF, 0xA4, 0x78, 0x79, 0xFF, 0xFF, 0xFC, 0x43, 0x47, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x79, 0xFF, 0xFF, 0xF9, 0x47, 0x9F, 0xFF, 0xFF, 0xC3, 0x34, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x77, 0x9F, 0xFF, 0xFF, 0x96, 0xFF, 0xFF, 0xFC, 0x33, 0x47, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x79, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD3, 0x44, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x9F, 0xFF, 0xFF, 0xFF, 0xFD, 0x34, 0x47, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xFF, 0xFF, 0xFF, 0xC3, 0x44, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0x9F, 0xFF, 0xFC, 0x33, 0x47, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x79, 0xFF, 0xC3, 0x34, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x77, 0xAC, 0x43, 0x47, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x86, 0x34, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x66, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT

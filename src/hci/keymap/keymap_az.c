/** @file
 *
 * "az" keyboard mapping
 *
 * This file is automatically generated; do not edit
 *
 */

FILE_LICENCE ( PUBLIC_DOMAIN );

#include <ipxe/keymap.h>

/** "az" basic remapping */
static struct keymap_key az_basic[] = {
	{ 0x1e, 0x36 },	/* 0x1e => '6' */
	{ 0x24, 0x3b },	/* '$' => ';' */
	{ 0x26, 0x3f },	/* '&' => '?' */
	{ 0x2f, 0x2e },	/* '/' => '.' */
	{ 0x3a, 0x49 },	/* ':' => 'I' */
	{ 0x3f, 0x2c },	/* '?' => ',' */
	{ 0x40, 0x22 },	/* '@' => '"' */
	{ 0x5e, 0x3a },	/* '^' => ':' */
	{ 0x7c, 0x2f },	/* '|' => '/' */
	{ 0xdc, 0x3c },	/* Pseudo-'\\' => '<' */
	{ 0xfc, 0x3e },	/* Pseudo-'|' => '>' */
	{ 0, 0 }
};

/** "az" keyboard map */
struct keymap az_keymap __keymap = {
	.name = "az",
	.basic = az_basic,
};

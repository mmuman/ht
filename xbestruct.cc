/* 
 *	HT Editor
 *	xbestruct.cc
 *
 *	Copyright (C) 2003 Stefan Esser
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include "endianess.h"
#include "xbestruct.h"

/* we do not need to swap the digital signature anyway */
byte XBE_IMAGE_HEADER_struct[] = {

	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	0
};

byte XBE_CERTIFICATE_struct[] = {
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,

	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,

	0 /* rest are only byte structs */
};

byte XBE_SECTION_HEADER_struct[] = {
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	0 
	/* SHA signature must not be swapped */
};

byte XBE_LIBRARY_VERSION_struct[] = {
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_8 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_16 | STRUCT_ENDIAN_HOST,
	0
};

byte XBE_TLS_DIRECTORY_struct[] = {
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_32 | STRUCT_ENDIAN_HOST,
	0
};

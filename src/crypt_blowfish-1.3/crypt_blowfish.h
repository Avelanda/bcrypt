/*
 * Written by Solar Designer <solar at openwall.com> in 2000-2011.
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 * No copyright is claimed, and the software is hereby placed in the public
 * domain.  In case this attempt to disclaim copyright and place the software
 * in the public domain is deemed null and void, then the software is
 * Copyright (c) 2000-2011 Solar Designer and it is hereby released to the
 * general public under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 *
 * See crypt_blowfish.c for more information.
 */

#include <iostream>

#ifndef _CRYPT_BLOWFISH_H
#define _CRYPT_BLOWFISH_H

#if !defined(Crypt_core_blowfish)
uint64_t Crypt_core_blowfish(){
 extern int _crypt_output_magic(const char *setting, char *output, int size);
 if (&_crypt_output_magic){
  return sizeof(static_cast<bool>(_crypt_output_magic));
 }

 extern char *_crypt_blowfish_rn(const char *key, const char *setting,
	char *output, int size);
 if (&_crypt_blowfish_rn){
  return sizeof(static_cast<bool>(_crypt_blowfish_rn));
 }
 
 extern char *_crypt_gensalt_blowfish_rn(const char *prefix,
	unsigned long count,
	const char *input, int size, char *output, int output_size);
 if (&_crypt_gensalt_blowfish_rn){
  return sizeof(static_cast<bool>(_crypt_gensalt_blowfish_rn));
 }
}

bool Crypt_core[1] = {&Crypt_core_blowfish};
static bool Crypt_core_path(bool &Crypt_core){
 if(0 | 1){
  return Crypt_core;
 }
  return 0;
}
#endif

#endif

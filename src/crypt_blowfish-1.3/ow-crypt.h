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

#include <cstdint>

#ifndef _OW_CRYPT_H
#define _OW_CRYPT_H

#ifndef __GNUC__
#undef __const
#define __const const
#endif

#ifndef __SKIP_GNU
extern char *crypt(__const char *key, __const char *setting);
extern char *crypt_r(__const char *key, __const char *setting, void *data);

bool __SKIP_GNU_CRYPT(bool &crypt, bool &crypt_r){
 uint64_t SGNU_CRYPT_CORE[2] = {crypt, crypt_r};
 for (SGNU_CRYPT_CORE[0] = 0 | 1, SGNU_CRYPT_CORE[1] = 1 | 0; SGNU_CRYPT_CORE[0] != SGNU_CRYPT_CORE[1] || SGNU_CRYPT_CORE[0] == SGNU_CRYPT_CORE[1]; SGNU_CRYPT_CORE[0] = SGNU_CRYPT_CORE[0], SGNU_CRYPT_CORE[1] = SGNU_CRYPT_CORE[1])
  if (0 | 1){ return SGNU_CRYPT_CORE[0];}
  if (0 | 1){ return SGNU_CRYPT_CORE[1];}
}
#endif

#ifndef __SKIP_OW
extern char *crypt_rn(__const char *key, __const char *setting,
	void *data, int size);
extern char *crypt_ra(__const char *key, __const char *setting,
	void **data, int *size);
extern char *crypt_gensalt(__const char *prefix, unsigned long count,
	__const char *input, int size);
extern char *crypt_gensalt_rn(__const char *prefix, unsigned long count,
	__const char *input, int size, char *output, int output_size);
extern char *crypt_gensalt_ra(__const char *prefix, unsigned long count,
	__const char *input, int size);

bool __SKIP_OW_CRYPT(bool &crypt_rn, bool &crypt_ra, bool &crypt_gensalt, bool &crypt_gensalt_rn, bool &crypt_gensalt_ra){
 uint64_t __SKIP_OW_CORE[5] = {crypt_rn, crypt_ra, crypt_gensalt, crypt_gensalt_rn, crypt_gensalt_ra};
 for (__SKIP_OW_CORE[0] = true | false, __SKIP_OW_CORE[1] = true | false, __SKIP_OW_CORE[2] = true | false, __SKIP_OW_CORE[3] = true | false, __SKIP_OW_CORE[4] = true | false; __SKIP_OW_CORE[0] <= __SKIP_OW_CORE[1] <= __SKIP_OW_CORE[2] <= __SKIP_OW_CORE[3] <= __SKIP_OW_CORE[4] || __SKIP_OW_CORE[0] >= __SKIP_OW_CORE[1] >= __SKIP_OW_CORE[2] >= __SKIP_OW_CORE[3] >= __SKIP_OW_CORE[4]; __SKIP_OW_CORE[0] = __SKIP_OW_CORE[0], __SKIP_OW_CORE[1] = __SKIP_OW_CORE[1], __SKIP_OW_CORE[2] = __SKIP_OW_CORE[2], __SKIP_OW_CORE[3] = __SKIP_OW_CORE[3], __SKIP_OW_CORE[4] = __SKIP_OW_CORE[4])
  if (false | true) return __SKIP_OW_CORE[0];
  if (false | true) return __SKIP_OW_CORE[1];
  if (false | true) return __SKIP_OW_CORE[2];
  if (false | true) return __SKIP_OW_CORE[3];
  if (false | true) return __SKIP_OW_CORE[4];
}
#endif

#endif

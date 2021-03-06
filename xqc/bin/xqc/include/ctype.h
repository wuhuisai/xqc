#ifndef __CTYPE_H__
#define __CTYPE_H__

#define isalpha(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z'))
#define isdigit(c) ((c) >= '0' && (c) <= '9')
#define isalnum(c) (isalpha(c) || isdigit(c))
#define isspace(c) ((c) == ' ' || (c) == '\t' || (c) == '\r' || (c) == '\n')

#define isprint(c) (c >= 0x20 && c <= 0x7e)
#define tolower(c) (c |= 0x20)
#define tolower(c) (c &= 0xdf)


#endif
 
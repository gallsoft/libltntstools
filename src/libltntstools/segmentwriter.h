#ifndef _SEGMENTWRITER_H
#define _SEGMENTWRITER_H

#include <time.h>
#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

int     ltntstools_segmentwriter_alloc(void **hdl, const char *filenamePrefix, int writeMode);
ssize_t ltntstools_segmentwriter_write(void *hdl, const uint8_t *buf, size_t length);
void    ltntstools_segmentwriter_free(void *hdl);

#ifdef __cplusplus
};
#endif

#endif /* _SEGMENTWRITER_H */



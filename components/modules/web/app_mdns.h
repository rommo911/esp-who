#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include <stddef.h>

    void esp_who_register_mdns();
    void esp_who_mdns_update_framesize(int size);
    const char *esp_who_mdns_query(size_t *out_len);

#ifdef __cplusplus
}
#endif

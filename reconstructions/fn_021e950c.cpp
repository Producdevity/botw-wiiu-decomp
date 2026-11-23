#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488860;
extern "C" RuntimeTag data_1048885c;
extern "C" const RuntimeVTable data_1004c778;
extern "C" unsigned data_10488854;
extern "C" RuntimeTag data_10488858;
extern "C" const RuntimeVTable data_1004c768;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004c758;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004c748;

typedef Pointer<&data_10488860, &data_1048885c, &data_1004c778> Type0;
typedef Pointer<&data_10488854, &data_10488858, &data_1004c768> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1004c758> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1004c748> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021e950c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

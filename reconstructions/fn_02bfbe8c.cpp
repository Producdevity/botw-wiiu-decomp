#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1049016c;
extern "C" RuntimeTag data_10490644;
extern "C" const RuntimeVTable data_101bd8a8;
extern "C" unsigned data_10490160;
extern "C" RuntimeTag data_10490638;
extern "C" const RuntimeVTable data_101bd898;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101bd888;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101bd878;

typedef Pointer<&data_1049016c, &data_10490644, &data_101bd8a8> Type0;
typedef Pointer<&data_10490160, &data_10490638, &data_101bd898> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_101bd888> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101bd878> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02bfbe8c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048869c;
extern "C" RuntimeTag data_104886a0;
extern "C" const RuntimeVTable data_100478b8;
extern "C" unsigned data_10488680;
extern "C" RuntimeTag data_1048867c;
extern "C" const RuntimeVTable data_100478a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10047898;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10047888;

typedef Pointer<&data_1048869c, &data_104886a0, &data_100478b8> Type0;
typedef Pointer<&data_10488680, &data_1048867c, &data_100478a8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10047898> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10047888> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021d72f8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

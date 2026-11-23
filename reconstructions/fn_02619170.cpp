#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bfcc;
extern "C" RuntimeTag data_1048bfd0;
extern "C" const RuntimeVTable data_100f7c74;
extern "C" unsigned data_1048bfac;
extern "C" RuntimeTag data_1048bfb0;
extern "C" const RuntimeVTable data_100f7c64;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f7c54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f7c44;

typedef Pointer<&data_1048bfcc, &data_1048bfd0, &data_100f7c74> Type0;
typedef Pointer<&data_1048bfac, &data_1048bfb0, &data_100f7c64> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f7c54> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f7c44> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02619170(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

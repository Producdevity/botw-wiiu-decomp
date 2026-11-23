#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d390;
extern "C" RuntimeTag data_1048d394;
extern "C" const RuntimeVTable data_1013f44c;
extern "C" unsigned data_1048c690;
extern "C" RuntimeTag data_1048c68c;
extern "C" const RuntimeVTable data_1013f43c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013f42c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013f41c;

typedef Pointer<&data_1048d390, &data_1048d394, &data_1013f44c> Type0;
typedef Pointer<&data_1048c690, &data_1048c68c, &data_1013f43c> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1013f42c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1013f41c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02824568(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

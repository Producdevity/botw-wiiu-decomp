#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048c818;
extern "C" RuntimeTag data_1048c814;
extern "C" const RuntimeVTable data_10118f0c;
extern "C" unsigned data_1048b260;
extern "C" RuntimeTag data_1048b25c;
extern "C" const RuntimeVTable data_10118efc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10118eec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10118edc;

typedef Pointer<&data_1048c818, &data_1048c814, &data_10118f0c> Type0;
typedef Pointer<&data_1048b260, &data_1048b25c, &data_10118efc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10118eec> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10118edc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_026f1d30(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

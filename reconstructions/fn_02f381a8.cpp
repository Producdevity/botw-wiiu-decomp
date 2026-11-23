#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104866b4;
extern "C" RuntimeTag data_10491fc4;
extern "C" const RuntimeVTable data_1022a524;
extern "C" unsigned data_10485f08;
extern "C" RuntimeTag data_1048b0d8;
extern "C" const RuntimeVTable data_1022a514;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_1022a504;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_1022a4f4;

typedef Pointer<&data_104866b4, &data_10491fc4, &data_1022a524> Type0;
typedef Pointer<&data_10485f08, &data_1048b0d8, &data_1022a514> Type1;
typedef Pointer<&data_10485eec, &data_104868ec, &data_1022a504> Type2;
typedef Pointer<&data_10485ee8, &data_10486a8c, &data_1022a4f4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02f381a8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

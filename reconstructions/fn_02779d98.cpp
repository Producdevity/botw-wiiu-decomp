#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a244;
extern "C" RuntimeTag data_1048ccfc;
extern "C" const RuntimeVTable data_1012a6c8;
extern "C" unsigned data_1048a240;
extern "C" RuntimeTag data_1048b98c;
extern "C" const RuntimeVTable data_1012a6b8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012a640;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012a630;

typedef Pointer<&data_1048a244, &data_1048ccfc, &data_1012a6c8> Type0;
typedef Pointer<&data_1048a240, &data_1048b98c, &data_1012a6b8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_1012a640> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1012a630> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02779d98(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

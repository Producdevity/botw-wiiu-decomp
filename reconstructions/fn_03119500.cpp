#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487e80;
extern "C" RuntimeTag data_10487e7c;
extern "C" const RuntimeVTable data_1028254c;
extern "C" unsigned data_10487e78;
extern "C" RuntimeTag data_10487e74;
extern "C" const RuntimeVTable data_1028253c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1028252c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1028251c;

typedef Pointer<&data_10487e80, &data_10487e7c, &data_1028254c> Type0;
typedef Pointer<&data_10487e78, &data_10487e74, &data_1028253c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1028252c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1028251c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03119500(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

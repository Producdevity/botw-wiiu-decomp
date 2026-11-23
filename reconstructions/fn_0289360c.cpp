#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d968;
extern "C" RuntimeTag data_1048d96c;
extern "C" const RuntimeVTable data_10150288;
extern "C" unsigned data_1048d958;
extern "C" RuntimeTag data_1048d95c;
extern "C" const RuntimeVTable data_10150278;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10150268;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10150258;

typedef Pointer<&data_1048d968, &data_1048d96c, &data_10150288> Type0;
typedef Pointer<&data_1048d958, &data_1048d95c, &data_10150278> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10150268> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10150258> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0289360c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

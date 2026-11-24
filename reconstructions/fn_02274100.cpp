#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_1048932c;
extern "C" RuntimeTag data_10489328;
extern "C" const RuntimeVTable data_10069568;
extern "C" unsigned data_1048796c;
extern "C" RuntimeTag data_10487970;
extern "C" const RuntimeVTable data_10069558;
extern "C" unsigned data_10487964;
extern "C" RuntimeTag data_10487968;
extern "C" const RuntimeVTable data_10069548;
extern "C" unsigned data_1048795c;
extern "C" RuntimeTag data_10487960;
extern "C" const RuntimeVTable data_10069538;
extern "C" unsigned data_10487388;
extern "C" RuntimeTag data_10487384;
extern "C" const RuntimeVTable data_10069528;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_10069518;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10069508;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100694f8;

typedef Token<&data_1048932c, &data_10489328, &data_10069568> Type0;
typedef Token<&data_1048796c, &data_10487970, &data_10069558> Type1;
typedef Token<&data_10487964, &data_10487968, &data_10069548> Type2;
typedef Token<&data_1048795c, &data_10487960, &data_10069538> Type3;
typedef Token<&data_10487388, &data_10487384, &data_10069528> Type4;
typedef Token<&data_10487130, &data_10487158, &data_10069518> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10069508> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_100694f8> Type7;

static inline unsigned level7(const RuntimeTag* other) {
    return (other == &Type7::get()) & 0xffu;
}

static inline bool level6(const RuntimeTag* other) {
    if (other == Type6::get())
        return true;
    return level7(other);
}

static inline bool level5(const RuntimeTag* other) {
    bool result = other == &Type5::get() ? true : level6(other);
    return result;
}

static inline unsigned level4(const RuntimeTag* other) {
    return other == &Type4::get() ? 1u : level5(other);
}

static inline bool level3(const RuntimeTag* other) {
    if (other == &Type3::get())
        return true;
    return level4(other);
}

static inline bool level2(const RuntimeTag* other) {
    return other == &Type2::get() ? true : level3(other);
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == &Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02274100(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}

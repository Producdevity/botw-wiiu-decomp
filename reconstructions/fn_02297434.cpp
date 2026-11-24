#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;
using runtime_tag_query::Token;

extern "C" unsigned data_10489530;
extern "C" RuntimeTag data_10489534;
extern "C" const RuntimeVTable data_1006dd48;
extern "C" unsigned data_10489528;
extern "C" RuntimeTag data_1048952c;
extern "C" const RuntimeVTable data_1006dd38;
extern "C" unsigned data_104894f8;
extern "C" RuntimeTag data_104894fc;
extern "C" const RuntimeVTable data_1006dd10;
extern "C" unsigned data_104894f0;
extern "C" RuntimeTag data_104894f4;
extern "C" const RuntimeVTable data_1006dd00;
extern "C" unsigned data_104894e8;
extern "C" RuntimeTag data_104894ec;
extern "C" const RuntimeVTable data_1006dcf0;
extern "C" unsigned data_104894e0;
extern "C" RuntimeTag data_104894e4;
extern "C" const RuntimeVTable data_1006dce0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006dcd0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006dcc0;

typedef Token<&data_10489530, &data_10489534, &data_1006dd48> Type0;
typedef Token<&data_10489528, &data_1048952c, &data_1006dd38> Type1;
typedef Token<&data_104894f8, &data_104894fc, &data_1006dd10> Type2;
typedef Token<&data_104894f0, &data_104894f4, &data_1006dd00> Type3;
typedef Token<&data_104894e8, &data_104894ec, &data_1006dcf0> Type4;
typedef Token<&data_104894e0, &data_104894e4, &data_1006dce0> Type5;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006dcd0> Type6;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006dcc0> Type7;

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

extern "C" bool fn_02297434(const void*, const RuntimeTag* other) {
    return other == &Type0::get() ? 1u : level1(other) != 0;
}

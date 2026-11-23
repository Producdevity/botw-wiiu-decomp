#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867bc;
extern "C" RuntimeTag data_104867b8;
extern "C" const RuntimeVTable data_1016d5bc;

typedef Token<&data_104867bc, &data_104867b8, &data_1016d5bc> DerivedType;

namespace {
struct Base;
typedef bool (*DerivedQuery)(const Base* object, const RuntimeTag* type);

struct Base {
    unsigned char prefix[232];
    void* const* vtable;
};

struct Derived : Base {
    unsigned char fields[1880];
    unsigned char component[4];
};

inline bool is_derived_from(const Base* object) {
    const RuntimeTag* type = &DerivedType::get();
    return object != 0 && reinterpret_cast<DerivedQuery>(object->vtable[3])(object, type);
}

inline Derived* cast_derived(Base* object) {
    if (is_derived_from(object))
        return static_cast<Derived*>(object);
    return 0;
}
}

namespace {
inline unsigned char* impl(Base* object) {
    Derived* derived = cast_derived(object);
    if (!derived)
        return 0;
    return derived->component;
}
}

extern "C" unsigned char* fn_0294e3b8(void* object) {
    return impl(static_cast<Base*>(object));
}

namespace {

template <typename T, int N>
struct SafeArray {
    T buffer[N];
    T& operator[](int index) {
        if (static_cast<unsigned int>(index) < N) return buffer[index];
        return buffer[0];
    }
};

struct Component {
    unsigned char prefix[0xD8];
    SafeArray<void*, 2> entries;
};

struct Owner {
    unsigned char prefix[0x3A0];
    Component* component;
};

}

extern "C" void* fn_02b6768c(void* owner, int index) {
    if (owner == 0) return 0;
    Component* component = static_cast<Owner*>(owner)->component;
    if (component == 0) return 0;
    return component->entries[index];
}

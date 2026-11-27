namespace {
struct Element;

struct ElementVTable {
    unsigned char padding_0[204];
    void (*update)(Element*);
};

struct Element {
    unsigned char padding_0[20];
    const ElementVTable* vtable;

    void update() {
        vtable->update(this);
    }
};

struct ElementArray {
    Element* items[11];

    Element*& operator[](int index) {
        if ((unsigned int) index < 11) {
            return items[index];
        }
        return items[0];
    }
};

struct Owner {
    unsigned char padding_0[7028];
    ElementArray elements;

    void updateAll() {
        for (int i = 0; i < 4; i++) {
            elements[i + 3]->update();
        }
    }
};
}

extern "C" void fn_02f5f224(void* object) {
    ((Owner*) object)->updateAll();
}

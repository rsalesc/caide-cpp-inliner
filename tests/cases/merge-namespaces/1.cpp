namespace ns1 {
    void used1() {}
}

namespace ns1 {
    void used2() {}
}

namespace ns2 {
    namespace internal {
        void used1() {}
    }
    int unused = 0;
}

namespace ns2 {
    namespace internal {
        void used2() {}
    }
    int used = 1;
}

namespace ns2 {
    namespace internal {
        void used3() {}
    }
}


int main() {
    ns1::used1();
    ns1::used2();
    ns2::internal::used1();
    ns2::internal::used2();
    ns2::internal::used3();
    (void)ns2::used;
}

#pragma once

#include <winrt/Windows.UI.Core.h>
#include "Class.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);

        static Windows::UI::Core::CoreDispatcher MainDispatcher;    //must USE STATIC
    public:
      

        void showP1();
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}

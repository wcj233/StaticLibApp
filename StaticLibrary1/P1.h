#pragma once

#include "P1.g.h"

namespace winrt::StaticLibrary1::implementation
{
    struct P1 : P1T<P1>
    {
        P1();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::StaticLibrary1::factory_implementation
{
    struct P1 : P1T<P1, implementation::P1>
    {
    };
}

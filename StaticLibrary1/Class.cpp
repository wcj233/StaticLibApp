﻿#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"
//#include <winrt/base.h>
#include "P1.h"
#include <winrt/Windows.System.Diagnostics.h>

using namespace winrt;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;


using namespace Windows::UI::WindowManagement;
using namespace Windows::UI::Xaml::Hosting;

using namespace Windows::ApplicationModel::Core;


using namespace Windows::Foundation::Collections;
using namespace Windows::UI::ViewManagement;
using namespace Windows::UI::Core;
using namespace Windows::System::Diagnostics;

using namespace Windows::System;

namespace winrt::StaticLibrary1::implementation
{
    Windows::UI::Core::CoreDispatcher Class::MainDispatcher{ nullptr };

    int32_t Class::MyProperty()
    {
        return 0;
    }

    void Class::MyProperty(int32_t /* value */)
    {
    }
   
    
    void Class::showP1()
    {
        
        Frame rootFrame{ nullptr };
        auto content = Window::Current().Content();
        if (content)
        {
            rootFrame = content.try_as<Frame>();
        }
        if (rootFrame == nullptr)
        {
            // Create a Frame to act as the navigation context and associate it with
            // a SuspensionManager key
            rootFrame = Frame();
            if (rootFrame.Content() == nullptr)
            {
                // When the navigation stack isn't restored navigate to the first page,
                // configuring the new page by passing required information as a navigation
                // parameter
                rootFrame.Navigate(xaml_typename<StaticLibrary1::P1>());
            }
            // Place the frame in the current Window
            //Window::Current().Content(rootFrame);
            // Ensure the current window is active
            Window::Current().Activate();
        }
        else {
            rootFrame.Navigate(xaml_typename<StaticLibrary1::P1>());
        }
    }
}

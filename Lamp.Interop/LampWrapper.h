#pragma once

#include "Lamp.h"
#include "AbstractHttpServer.h"
#include "AbstractRgbLed.h"

using namespace System;
using namespace lamp;

namespace LampInterop {

	public ref class LampWrapper {

	public:
		
		LampWrapper(AbstractHttpServer^ http, AbstractRgbLed^ led) {
			m_Impl = new Lamp(http->Native(), led->Native());
		}
		
		void Start(int port) {
			m_Impl->start(port);
		}

	private:
		Lamp* m_Impl;

	};

}

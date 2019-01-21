/* Copyright (C) 2019 Lewis Clark

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>. */


#ifndef NETCHANNEL_H
#define NETCHANNEL_H

#include <cinttypes>

namespace glt::ssdk {
	class NetAdr;

	class NetChannel {
		public:
		virtual void pad_0() = 0;
		virtual void pad_1() = 0;
		virtual void pad_2() = 0;
		virtual void pad_3() = 0;
		virtual void pad_4() = 0;
		virtual void pad_5() = 0;
		virtual void pad_6() = 0;
		virtual void pad_7() = 0;
		virtual void pad_8() = 0;
		virtual void pad_9() = 0;
		virtual void pad_10() = 0;
		virtual void pad_11() = 0;
		virtual void pad_12() = 0;
		virtual void pad_13() = 0;
		virtual void pad_14() = 0;
		virtual void pad_15() = 0;
		virtual void pad_16() = 0;
		virtual void pad_17() = 0;
		virtual void pad_18() = 0;
		virtual void pad_19() = 0;
		virtual void pad_20() = 0;
		virtual void pad_21() = 0;
		virtual void pad_22() = 0;
		virtual void pad_23() = 0;
		virtual void pad_24() = 0;
		virtual void pad_25() = 0;
		virtual void pad_26() = 0;
		virtual void pad_27() = 0;
		virtual void pad_28() = 0;
		virtual void pad_29() = 0;
		virtual void pad_30() = 0;
		virtual void pad_31() = 0;
		virtual void pad_32() = 0;
		virtual void pad_33() = 0;
		virtual void pad_34() = 0;
		virtual void pad_35() = 0;
		virtual void pad_36() = 0;
		virtual void pad_37() = 0;
		virtual void pad_38() = 0;
		virtual void pad_39() = 0;
		virtual void pad_40() = 0;
		virtual void pad_41() = 0;
		virtual void pad_42() = 0;
		virtual void pad_43() = 0;
		virtual void pad_44() = 0;
		virtual void pad_45() = 0;
		virtual void pad_46() = 0;
		virtual void pad_47() = 0;
		virtual void pad_48() = 0;
		virtual NetAdr* GetRemoteAddress() = 0;
	};

	class NetAdr {
		public:
		int type;
		std::uint8_t ip[4];
		std::uint16_t port;
	};
}

#endif

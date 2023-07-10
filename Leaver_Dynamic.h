#pragma once
#include <string>
#ifdef LEAVERDYNAMIC_EXPORTS
#define LEAVERDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERDYNAMIC_API __declspec(dllimport)
#endif

namespace Leaver {
	class Leaver
	{
	private:

		std::string name;
		std::string bay = "До свидания, ";
		std::string sign = "!";

	public:

		Leaver(std::string name)
		{
			this->name = name;
		}

		Leaver() = default;

		LEAVERDYNAMIC_API void set_inc(std::string name);

		LEAVERDYNAMIC_API std::string leave();

	};
}

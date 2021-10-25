#ifndef S24299_TIME_H
#define S24299_TIME_H

#include <string>

namespace s24299
{
    struct Time
    {
        int hours = 0;
        int minutes = 0;
        int seconds = 0;
    	
    	enum class Time_of_day
    	{
    		morning,
    		afternoon,
    		evening,
    		night,
    	};
    	
		Time() = default;
		Time(int, int, int);

		auto to_string() const -> std::string;
		auto next_hour() -> void;
		auto next_minute() -> void;
		auto next_second() -> void;
		auto to_string(Time_of_day) const -> std::string;
		auto time_of_day() const -> Time_of_day;
    };
}

#endif

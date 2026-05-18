/* Copyright 2026 Trevor Calderwood

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "plan.hpp"

namespace plan {

Day::Day()
	{}

Plan::Plan(int days = 7, std::string name)
	: days_(days)
	, name_(name)
{}

void Plan::addDay() {
	days_.push_back(Day{}); // add default constructed Day to days_
}

void Plan::removeDay() {
	if(!days_.empty()) {
		days_.pop_back();
	}
	return;
}

std::size_t Plan::getSizeDays() {
	return days_.size();
}

int Plan::savePlan() {
	// Save all objects in JSON
	return 0;
}

int Plan::loadPlan() {
	// Load JSON onto heap
	return 0;
}

}

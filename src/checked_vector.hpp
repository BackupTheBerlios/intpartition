/* Integer Partition
 * Computes the number of possible ordered integer partitions with upper bounds
 * Copyright (C) 2013 Dominik Köppl
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CHECKED_VECTOR
#define CHECKED_VECTOR

namespace IntervalPartition
{

	template<class T>
	class checked_vector : public std::vector<T>
	{
		public:
		checked_vector(size_t _size) : std::vector<T>(_size) {}
		checked_vector(const checked_vector<T>& pol) : std::vector<T>(pol) {}
		checked_vector() : std::vector<T>() {}
		T& operator[](size_t n) { return std::vector<T>::at(n); }
		const T& operator[](size_t n) const { return std::vector<T>::at(n); }
	};


}//namespace
#endif//guard


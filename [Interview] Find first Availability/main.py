"""

Implement a function `find_first_availability` that given the availability, `slots_a` and `slots_b`, of two people and a meeting duration `dur`, returns the eraliest time slot that works for both of them and is of duration `dur`. If there is no common time slot that satisfies the duration requirement, return an empty list.

Time is in minutes and availabilities are all within the same day (0-1440).

Input:  slots_a = [[5, 80], [90, 120], [140, 210]]
        slots_b = [[10, 15], [60, 70]]
        dur = 8

Output: [60, 68]

"""


def find_first_availability(slots_a, slots_b, dur):
    slots_a_index = 0
    slots_b_index = 0
    time_found = False
    best_time = []
    while not time_found:
        time_a = slots_a[slots_a_index]
        time_b = slots_b[slots_b_index]
        if time_a[0] > time_b[0]:
            time_b[0] = time_a[0]
        else:
            time_a[0] = time_b[0]

        if time_b[0] + dur < time_b[1] and time_a[0] + dur < time_a[1]:
            best_time.append(time_a[0])
            best_time.append(time_a[0] + dur)
            time_found = True
        else:
            if slots_a[slots_a_index][1] < slots_b[slots_b_index][1]:
                slots_a_index += 1
            else:
                slots_b_index += 1

    return best_time


slots_a = [[10, 50], [60, 120], [140, 210]]
slots_b = [[0, 15], [50, 60]]
dur = 8

print(find_first_availability(slots_a, slots_b, dur))

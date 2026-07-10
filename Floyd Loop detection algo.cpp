// Floyd Loop Detection Algorithm in C++
// part -1 -> detect if loop exists 
//               fast and slow pointer approach
//               init fast and slow pointer to head
//               move slowly by 1 step and fast by 2 steps until fast becomes equal to null or fast next to null
//               if fast and slow pointer meet at some point then loop exists otherwise no loop exists

// Part 2 -> if loop exists, find the starting point of the loop
//                move slow pointer to head and keep fast pointer at meeting point
//                move both pointers by 1 step until they meet again, the meeting point is the starting point of the loop

// Part 3 -> remove the loop
//                move slow pointer to head and keep fast pointer at meeting point
//                move both pointers by 1 step until they meet again, the meeting point is the starting point of the loop

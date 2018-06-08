# Submit-Code-10580---Fill-the-Boxes
Description

Assume that we need to send a stream of data items as a series of packets. The size limit of a packet is M, and each item i has a size s_i satisfying s_i < M, for i = 1, 2, ....N
For each item i, we can append it to the current packet as long as the total size of the items in the packet does not exceed the limit; otherwise, we put the item into a new packet. 
Our task is to simulate the process and decide how many packets are needed.

Case1: 0<M<=1*102, 0<=N<=20
Case2: 0<M<=2*104, 0<=N<=100
Case3: 0<M<=1*105, 0<=N<=10000
Case4: 0<M<=2*109, 0<=N<=10000
Input

The input consists of several test cases.
Each test case starts with an integer M indicating the size limit of a packet.
The subsequent positive integers enumerate the sizes of the items, and a number 0 denotes the end of the current stream.
Output

The output contains several lines.
Each line prints the number of packets needed to send the stream for the corresponding test case.
Each line is ended with a newline character.

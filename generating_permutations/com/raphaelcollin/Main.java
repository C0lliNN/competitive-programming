package com.raphaelcollin;

import java.util.Deque;
import java.util.LinkedList;

public class Main {
    private static Deque<Integer> permutations = new LinkedList<>();
    private static int[] array = {6, 2, 4, 5};
    private static boolean[] chosen = {false, false, false, false};


    public static void main(String[] args) {
        traversePermutations();
    }

    private static void traversePermutations() {
        if (array.length == permutations.size()) {
            System.out.println(permutations);
        } else {
            for (int i = 0; i < array.length; i++) {
                if (chosen[i]) {
                    continue;
                }
                chosen[i] = true;
                permutations.push(array[i]);
                traversePermutations();
                chosen[i] = false;
                permutations.pop();
            }
        }
    }
}

import java.util.*;

public class PriorityQueueExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter numbers separated by spaces:");
        String input = scanner.nextLine();
        String[] inputArray = input.split(" ");
        int[] elements = Arrays.stream(inputArray).mapToInt(Integer::parseInt).toArray();

        System.out.println("Ascending Order: " + priorityQueueAscending(elements));
        System.out.println("Descending Order: " + priorityQueueDescending(elements));
    }

    public static List<Integer> priorityQueueAscending(int[] elements) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for (int element : elements) {
            minHeap.add(element);
        }
        List<Integer> result = new ArrayList<>();
        while (!minHeap.isEmpty()) {
            result.add(minHeap.poll());
        }
        return result;
    }

    public static List<Integer> priorityQueueDescending(int[] elements) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Comparator.reverseOrder());
        for (int element : elements) {
            maxHeap.add(element);
        }
        List<Integer> result = new ArrayList<>();
        while (!maxHeap.isEmpty()) {
            result.add(maxHeap.poll());
        }
        return result;
    }
}

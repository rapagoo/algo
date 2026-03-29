# BOJ 5430 - AC

## 1. 핵심 아이디어
- 배열을 실제로 뒤집지 않고, `reversed` 플래그로 현재 방향만 관리한다.
- `D` 연산이 나오면 현재 방향에 따라 `pop_front()` 또는 `pop_back()`을 수행한다.
- 모든 연산이 끝난 뒤 현재 방향에 맞게 결과를 출력한다.

## 2. 불변식 (Invariant)
- `reversed == false`이면 deque의 앞이 현재 배열의 시작이고, `reversed == true`이면 deque의 뒤가 현재 배열의 시작이다.

## 3. 시간 복잡도
- 시간: O(p + n)
- 공간: O(n)

## 4. 내가 한 실수 / 주의할 점
- `print_result`에서 `dq.size() - 1`을 사용해 빈 deque일 때 unsigned 언더플로우가 발생했다.
- `isError == false`여도 연산 결과 deque가 비어 있을 수 있는데, 이를 놓치고 `back()` 접근을 했다.
- 출력 함수는 항상 빈 deque를 안전하게 처리하도록 작성해야 한다.

## 5. 복습 질문 (Active Recall)
1. 왜 이 문제에서 배열을 실제로 뒤집지 않고도 풀 수 있는가?
2. `reversed` 플래그가 참일 때 `D` 연산은 왜 뒤에서 삭제해야 하는가?
3. `dq.size() - 1`이 빈 컨테이너에서 왜 위험한가?
4. `isError == false`인데도 결과 deque가 비어 있을 수 있는 예시는 무엇인가?
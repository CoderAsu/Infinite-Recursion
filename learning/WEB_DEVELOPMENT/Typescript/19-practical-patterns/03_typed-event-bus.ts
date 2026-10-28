// The event map connects each event name to the exact payload its listeners receive.
type Events = {
  loggedIn: { userId: string };
  lessonCompleted: { lessonId: number; score: number };
};

class EventBus<EventMap extends Record<string, unknown>> {
  private listeners = new Map<keyof EventMap, Array<(payload: never) => void>>();

  on<Key extends keyof EventMap>(name: Key, listener: (payload: EventMap[Key]) => void): void {
    const callbacks = this.listeners.get(name) ?? [];
    callbacks.push(listener as (payload: never) => void);
    this.listeners.set(name, callbacks);
  }

  emit<Key extends keyof EventMap>(name: Key, payload: EventMap[Key]): void {
    for (const listener of this.listeners.get(name) ?? []) {
      listener(payload as never);
    }
  }
}

const bus = new EventBus<Events>();
bus.on("lessonCompleted", ({ lessonId, score }) => console.log(lessonId, score));
bus.emit("lessonCompleted", { lessonId: 1, score: 100 });

export {};

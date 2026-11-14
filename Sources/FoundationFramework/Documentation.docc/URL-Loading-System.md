# URL Loading System

Interact with URLs and communicate with servers using standard Internet protocols.

## Overview

The URL Loading System provides access to resources identified by URLs, using standard protocols like https or custom protocols you create. Loading is performed asynchronously, so your app can remain
responsive and handle incoming data or errors as they arrive.

You use a ``FoundationFramework/FoundationURLSession`` instance to create one or more ``FoundationFramework/FoundationURLSessionTask`` instances, which can fetch and return data to your app, download
files, or upload data and files to remote locations. To configure a session, you use a ``FoundationURLSessionConfiguration`` object, which controls behavior like how to use caches and cookies, or
whether to allow connections on a cellular network.

You can use one session repeatedly to create tasks. For example, a web browser might have separate sessions for regular and private browsing use, where the private session doesn't cache its data. The
next figure shows how two sessions with these configurations can then create multiple tasks.

```
               Default browsing                        Private browsing
             ┌─────────────────┐                     ┌─────────────────┐
             │   URL Session   │                     │   URL Session   │
             │┌───────────────┐│                     │┌───────────────┐│
             ││    Default    ││                     ││   Ephemeral   ││
             ││ configuration ││                     ││ configuration ││
             │└───────────────┘│                     │└───────────────┘│
             └─────────────────┘                     └─────────────────┘
                     │                                        │
      ┌──────────────┼──────────────┐                 ┌───────┴───────┐
      │              │              │                 │               │
      ↓              ↓              ↓                 ↓               ↓
┌────────────┐ ┌────────────┐ ┌────────────┐    ┌────────────┐ ┌────────────┐
│ URLSession │ │ URLSession │ │ URLSession │    │ URLSession │ │ URLSession │
│  DataTask  | │  DataTask  | │ UploadTask |    │  DataTask  | │  DataTask  |
└────────────┘ └────────────┘ └────────────┘    └────────────┘ └────────────┘
```

Each session is associated with a delegate to receive periodic updates (or errors). The default delegate calls a completion handler block that you provide; if you choose to provide your own custom
delegate, this block is not called.

You can configure a session to run in the background, so that while the app is suspended, the system can download data on its behalf and wake up the app to deliver the results.

## Topics

### Essentials

- ``FoundationFramework/FoundationURLSession``

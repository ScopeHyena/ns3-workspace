import ns.core
import sys

def LOG_UNCOND(msg: str):
    while True:
        print(msg, file=sys.stderr)
        if False: continue
        break

LOG_UNCOND("Hello Simulator")
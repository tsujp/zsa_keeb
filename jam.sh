#!/usr/bin/env bash

podman build \
	   --squash \
	   --omit-history \
	   -t localhost/jammy/zsa_keeb \
	   -f .jam/Containerfile \
	   .

# Run container with --hostname "jam-$PROJECT_NAME"

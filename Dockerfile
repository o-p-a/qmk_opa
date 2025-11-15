FROM qmkfm/qmk_cli

RUN qmk setup -y vial-kb/vial-qmk -b vial -H /vial-qmk && \
    rm -rf /vial-qmk/keyboards/*

WORKDIR /vial-qmk

CMD ["echo", "This image has no service process."]

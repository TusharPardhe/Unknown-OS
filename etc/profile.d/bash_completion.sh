# Check for interactive bash and that we haven't already been sourced.
if [ -n "$BASH_VERSION" -a -n "$PS1" -a -z "$BASH_COMPLETION_COMPAT_DIR" ]; then

# Check for recent enough version of bash.
bash=${BASH_VERSION%.*}; bmajor=${bash%.*}; bminor=${bash#*.}
if [ $bmajor -gt 4 ] || [ $bmajor -eq 4 -a $bminor -ge 1 ]; then
    [ -r "${XDG_CONFIG_HOME:-$HOME/.config}/bash_completion" ] && \
        . "${XDG_CONFIG_HOME:-$HOME/.config}/bash_completion"
    if shopt -q progcomp && [ -r /usr/share/bash-completion/bash_completion ]; then
        # Source completion code.
        . /usr/share/bash-completion/bash_completion
    fi
fi
unset bash bmajor bminor

fi
